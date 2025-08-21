#!/usr/bin/env python3
"""
Generate prompt/completion pairs from Tree-sitter corpus tests by invoking a Claude CLI per test.

- Scans all `*.txt` files in the provided corpus directory (default: `test/corpus`).
- For each test section delimited by `==============================` headers, reads the code snippet
  before `---` and the corresponding syntax tree after `---`.
- Calls a configurable Claude command with an instruction to produce a plain-English prompt that
  would result in the code example, using the syntax tree for precision.
- Writes JSON Lines (one object per test) with fields: { "prompt": <english>, "completion": <code> }.

Usage examples (PowerShell):
  python scripts/generate_prompt_completion.py \
    --cmd "anthropic messages create --model claude-3-5-sonnet-latest --max-tokens 200 --input-file - | cat" \
    --output corpus_prompts.jsonl

  # Or if you have a `claude` CLI that reads from stdin and prints the output
  python scripts/generate_prompt_completion.py --cmd "claude" --output corpus_prompts.jsonl

Notes:
- The command provided via --cmd should read the prompt from STDIN and write the model's text to STDOUT.
- On Windows/PowerShell, quoting may differ; prefer passing the command without nested quotes when possible.
"""

from __future__ import annotations

import argparse
import json
import os
import re
import shlex
import subprocess
import sys
from dataclasses import dataclass
from pathlib import Path
from typing import Iterable, List, Optional


HEADER_LINE_RE = re.compile(r"^=+")


@dataclass
class CorpusTest:
    source_file: Path
    test_name: str
    code: str
    syntax_tree: str


def find_corpus_files(corpus_dir: Path) -> List[Path]:
    return sorted(p for p in corpus_dir.glob("*.txt") if p.is_file())


def parse_corpus_file(path: Path) -> List[CorpusTest]:
    tests: List[CorpusTest] = []
    text = path.read_text(encoding="utf-8")
    lines = text.splitlines()
    i = 0

    def read_until(predicate) -> List[str]:
        nonlocal i
        buf: List[str] = []
        n = len(lines)
        while i < n and not predicate(lines[i]):
            buf.append(lines[i])
            i += 1
        return buf

    n = len(lines)
    while i < n:
        # Seek header line of equals
        while i < n and not HEADER_LINE_RE.match(lines[i]):
            i += 1
        if i >= n:
            break

        # Expect: ===== header =====
        header_top = lines[i]
        i += 1
        if i >= n:
            break
        test_name = lines[i].strip()
        i += 1
        if i < n and HEADER_LINE_RE.match(lines[i]):
            i += 1  # skip bottom header

        # Read code until '---'
        code_lines: List[str] = []
        while i < n and lines[i].strip() == "":
            i += 1  # skip leading blanks
        while i < n and lines[i].strip() != "---":
            code_lines.append(lines[i])
            i += 1
        # Skip the '---' separator if present
        if i < n and lines[i].strip() == "---":
            i += 1

        # Optional blank lines before syntax tree
        while i < n and lines[i].strip() == "":
            i += 1

        # Read syntax tree until next header or EOF
        tree_lines: List[str] = []
        while i < n and not HEADER_LINE_RE.match(lines[i]):
            tree_lines.append(lines[i])
            i += 1

        code = "\n".join(code_lines).rstrip("\n")
        syntax_tree = "\n".join(tree_lines).rstrip("\n")

        # Filter out empty/invalid sections
        if test_name and code and syntax_tree:
            tests.append(CorpusTest(path, test_name, code, syntax_tree))

    return tests


def build_instruction(test: CorpusTest) -> str:
    # Keep the instruction minimal and deterministic; require only the plain-English prompt.
    return (
        "You are given a code example and its syntax tree.\n"
        "Write a single concise plain-English instruction that would cause a programmer to write the exact code example.\n"
        "Use details from the syntax tree to be precise about identifiers, literals, and structure.\n"
        "Rules:\n"
        "- Output ONLY the instruction text.\n"
        "- Do not include quotes, code blocks, prefaces, or extra commentary.\n\n"
        "Code example:\n"
        "```\n" + test.code + "\n```\n\n"
        "Syntax tree (S-expression):\n"
        "```\n" + test.syntax_tree + "\n```\n"
    )


def run_claude(cmd: str, prompt: str, timeout_sec: int) -> str:
    # We pass the prompt via stdin to the provided command string. Use shell=True to allow piped commands.
    completed = subprocess.run(
        cmd,
        input=prompt.encode("utf-8"),
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        timeout=timeout_sec,
        shell=True,
    )
    if completed.returncode != 0:
        raise RuntimeError(
            f"Command failed ({completed.returncode}): {cmd}\nSTDERR:\n{completed.stderr.decode('utf-8', errors='replace')}"
        )
    output = completed.stdout.decode("utf-8", errors="replace").strip()
    # Best-effort: remove surrounding quotes if the tool returns a quoted string
    if len(output) >= 2 and ((output.startswith('"') and output.endswith('"')) or (output.startswith("'") and output.endswith("'"))):
        output = output[1:-1]
    return output.strip()


def write_jsonl(records: Iterable[dict], output_path: Path) -> None:
    output_path.parent.mkdir(parents=True, exist_ok=True)
    with output_path.open("w", encoding="utf-8", newline="\n") as f:
        for rec in records:
            f.write(json.dumps(rec, ensure_ascii=False))
            f.write("\n")


def main(argv: Optional[List[str]] = None) -> int:
    parser = argparse.ArgumentParser(description="Generate prompt/completion pairs from corpus tests via Claude CLI")
    parser.add_argument("--corpus-dir", default="test/corpus", type=str, help="Directory containing corpus .txt files")
    parser.add_argument("--output", default="corpus_prompts.jsonl", type=str, help="Output JSONL file path")
    parser.add_argument(
        "--cmd",
        default=os.environ.get("CLAUDE_CMD", "claude"),
        type=str,
        help=(
            "Command to run for each test; must read the prompt from STDIN and write the model response to STDOUT. "
            "Examples: \n"
            "  claude\n"
            "  anthropic messages create --model claude-3-5-sonnet-latest --max-tokens 200 --input-file - | cat\n"
        ),
    )
    parser.add_argument("--timeout", default=60, type=int, help="Per-call timeout in seconds")
    parser.add_argument("--max-tests", default=None, type=int, help="Optional limit for number of tests (for dry runs)")
    args = parser.parse_args(argv)

    corpus_dir = Path(args.corpus_dir)
    output_path = Path(args.output)
    cmd = args.cmd
    timeout_sec = int(args.timeout)
    max_tests = args.max_tests

    if not corpus_dir.exists():
        print(f"Corpus directory not found: {corpus_dir}", file=sys.stderr)
        return 2

    files = find_corpus_files(corpus_dir)
    if not files:
        print(f"No corpus files found in: {corpus_dir}", file=sys.stderr)
        return 3

    # Collect tests
    all_tests: List[CorpusTest] = []
    for p in files:
        all_tests.extend(parse_corpus_file(p))

    if max_tests is not None:
        all_tests = all_tests[:max_tests]

    print(f"Discovered {len(all_tests)} tests across {len(files)} files.", file=sys.stderr)

    # Stream results as they are generated: write each JSON line and flush, also echo to stdout
    output_path.parent.mkdir(parents=True, exist_ok=True)
    written = 0
    with output_path.open("w", encoding="utf-8", newline="\n") as out_f:
        for idx, test in enumerate(all_tests, start=1):
            instruction = build_instruction(test)
            try:
                english_prompt = run_claude(cmd, instruction, timeout_sec)
            except Exception as e:
                print(
                    f"[{idx}/{len(all_tests)}] {test.source_file.name} :: {test.test_name} -> ERROR: {e}",
                    file=sys.stderr,
                )
                continue

            rec = {
                "prompt": english_prompt,
                "completion": test.code,
            }
            json_line = json.dumps(rec, ensure_ascii=False)
            # Write to file and flush so the user can see output grow
            out_f.write(json_line)
            out_f.write("\n")
            out_f.flush()
            # Also print the JSON line to stdout for immediate visibility
            print(json_line, flush=True)
            # Progress message to stderr
            print(
                f"[{idx}/{len(all_tests)}] {test.source_file.name} :: {test.test_name} -> OK",
                file=sys.stderr,
                flush=True,
            )
            written += 1

    print(f"Wrote {written} records to {output_path}", file=sys.stderr)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())


