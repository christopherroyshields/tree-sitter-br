# Tree-sitter BR

A [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) parser for the Business Rules! (BR) programming language.

## Overview

This project provides a fast, incremental parser for the Business Rules! programming language, enabling syntax highlighting, code folding, and other language-aware features in editors and IDEs.

Business Rules! (BR) is a BASIC-like programming language that supports:
- Line numbers and labels for control flow
- Various statements (CHAIN, CLOSE, DIM, FOR, IF, PRINT, etc.)
- String and numeric expressions
- Array operations with MAT statements
- File I/O operations
- Function definitions with DEF FN
- Multiple file extensions: `.brs`, `.wbs`, `.libs`

## Installation

### Prerequisites
- Node.js (for npm and build tools)
- C compiler (for native bindings)
- Tree-sitter CLI: `npm install -g tree-sitter-cli`

### Install from npm
```bash
npm install tree-sitter-br
```

### Build from source
```bash
git clone https://github.com/christopherroyshields/tree-sitter-br.git
cd tree-sitter-br
npm install
npm run build
```

## Usage

### Command Line
```bash
# Generate parser from grammar
tree-sitter generate

# build for cli
tree-sitter build

# Run tree-sitter test suite
tree-sitter test

# Parse a BR file
tree-sitter parse example.brs
```

### Node.js
```javascript
const Parser = require('tree-sitter');
const BR = require('tree-sitter-br');

const parser = new Parser();
parser.setLanguage(BR);

const code = `
10 PRINT "Hello, World!"
20 END
`;

const tree = parser.parse(code);
console.log(tree.rootNode.toString());
```

### Web (WASM)
```bash
# Build WASM version
tree-sitter build --wasm
```

```javascript
// Use in web applications
import Parser from 'web-tree-sitter';
import BR from './tree-sitter-br.wasm';

const parser = new Parser();
const language = await Parser.Language.load(BR);
parser.setLanguage(language);
```

## Development

### Project Structure
- `grammar.js` - Main grammar definition file
- `src/scanner.c` - External scanner for context-sensitive parsing
- `test/corpus/` - Test cases with expected parse trees
- `queries/` - Syntax highlighting queries
- `bindings/` - Language-specific bindings

### Building

```bash
# Generate parser from grammar
tree-sitter generate

# Build bindings for electron
npm run build:electron

# Build WASM version and test it in sandbox
tree-sitter build --wasm
tree-sitter playground
```

### Testing

```bash
# Run all tests
npm test
# or
tree-sitter test

# Test specific corpus files
tree-sitter test -f expressions
tree-sitter test -f statements

# Run TypeScript test
npx ts-node test.ts

# Development playground
npm start
```

### Grammar Development

The grammar is defined in `grammar.js` using Tree-sitter's JavaScript DSL. Key components:

- **Statements**: CHAIN, CLOSE, DIM, FOR, IF, PRINT, etc.
- **Expressions**: String and numeric expressions with operators
- **Control Flow**: Line numbers, labels, and branching
- **Arrays**: MAT operations and array indexing
- **Functions**: DEF FN definitions and calls

The external scanner (`src/scanner.c`) handles:
- Line endings (`_eol`)
- Comments
- Context-sensitive tokens

### Language Bindings

This parser supports multiple programming languages:

- **Node.js** (primary) - via node-gyp
- **Rust** - via Cargo.toml
- **Python** - via setup.py and pyproject.toml
- **Go** - via go.mod
- **Swift** - via Package.swift
- **C** - via CMakeLists.txt and Makefile

## Example BR Code

```basic
10 REM Business Rules! Example
20 DIM A(10)
30 FOR I = 1 TO 10
40   LET A(I) = I * 2
50   PRINT "A("; I; ") = "; A(I)
60 NEXT I
70 DEF FN SQUARE(X) = X * X
80 PRINT "Square of 5 = "; FN SQUARE(5)
90 END
```

## Contributing

1. Fork the repository
2. Create a feature branch: `git checkout -b feature-name`
3. Make your changes to `grammar.js` or `src/scanner.c`
4. Add or update tests in `test/corpus/`
5. Run tests: `tree-sitter test`
6. Generate parser: `tree-sitter generate`
7. Commit your changes: `git commit -am 'Add feature'`
8. Push to the branch: `git push origin feature-name`
9. Submit a pull request

### Test Corpus Format

Test files in `test/corpus/` use this format:
```
================================================================================
Test name
================================================================================

input code here

--------------------------------------------------------------------------------

(expected s-expression parse tree)
```

## Resources

- [Tree-sitter Documentation](https://tree-sitter.github.io/tree-sitter/)
- [Business Rules! Language Reference](https://www.brulescorp.com/)
- [Tree-sitter Grammar Development Guide](https://tree-sitter.github.io/tree-sitter/creating-parsers)

## License

[MIT License](LICENSE) - see LICENSE file for details.

## Changelog

See [CHANGELOG.md](CHANGELOG.md) for release notes and version history.
