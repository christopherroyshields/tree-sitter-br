import Parser from 'tree-sitter'
import br = require('../tree-sitter-br')

const parser = new Parser()
parser.setLanguage(br)

const sourceCode = 'def fnfoo(a)';
const tree = parser.parse(sourceCode);

console.log(tree);