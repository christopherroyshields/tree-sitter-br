"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const tree_sitter_1 = __importDefault(require("tree-sitter"));
const br = require("../tree-sitter-br");
const parser = new tree_sitter_1.default();
parser.setLanguage(br);
const sourceCode = 'def fnfoo(a)';
const tree = parser.parse(sourceCode);
console.log(tree.printDotGraph());
//# sourceMappingURL=index.js.map