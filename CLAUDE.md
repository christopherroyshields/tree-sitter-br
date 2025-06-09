# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is a Tree-sitter parser for the Business Rules! (BR) programming language. Tree-sitter is used to generate fast, incremental parsers for syntax highlighting, code folding, and other language-aware features in editors and IDEs.

The BR language is a BASIC-like language that supports line numbers, labels, various statements (CHAIN, CLOSE, DIM, FOR, IF, etc.), string/numeric expressions, array operations, file I/O, and function definitions.

## Essential Commands

### Build and Generate Parser
```bash
# Generate parser from grammar
tree-sitter generate

# Build native bindings (for Electron)
npm run build

# Build WASM version
tree-sitter build --wasm

# Build C library
make
```

### Testing
```bash
# Run all corpus tests
npm test
# or
tree-sitter test

# Test specific corpus file
tree-sitter test -f expressions
tree-sitter test -f statements

# Parse a specific file
tree-sitter parse example.brs
tree-sitter parse test.brs
```

### Development
```bash
# Run playground (requires WASM build)
npm start

# Run TypeScript test
npx ts-node test.ts
```

## Architecture

### Core Components

1. **grammar.js** - Main grammar definition file containing all language rules. This is the source of truth for the parser.

2. **src/scanner.c** - External scanner handling special tokens:
   - Line endings (`_eol`)
   - Comments
   - Other context-sensitive parsing

3. **Test Corpus** - Located in `test/corpus/`:
   - Each `.txt` file contains input code followed by expected S-expression parse trees
   - Files: expressions, form, keywords, statements

### Language Bindings

The project supports multiple language bindings:
- Node.js (primary, via node-gyp)
- Rust (via Cargo)
- Python (via setup.py)
- Go, Swift, C

### File Extensions

BR files use these extensions:
- `.brs` - Business Rules! source
- `.wbs` - Web Business Rules!
- `.libs` - Library files

## Key Grammar Patterns

When modifying the grammar, note that BR uses:
- Line numbers and labels for control flow
- Statement keywords like CHAIN, CLOSE, DIM, FOR, IF, PRINT
- Both string and numeric expressions
- Array operations with MAT statements
- File I/O with specific syntax
- Function definitions with DEF FN

The external scanner in `src/scanner.c` handles line endings and comments, which are crucial for proper BR parsing.