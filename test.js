"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const tree_sitter_1 = __importDefault(require("tree-sitter"));
const br = require('./');
const parser = new tree_sitter_1.default();
parser.setLanguage(br);
const code = `print mat foo, mat bar
print mat foo$, mat bar$, baz$(1)
print a,b,c
print a$,b$,c$`;
const refQuery = `(number_array_name) @number_arrays
(string_array_name) @string_arrays
(number_name) @numeric
(string_name) @string`;
const tree = parser.parse(code);
const query = new tree_sitter_1.default.Query(br, refQuery);
const matches = query.matches(tree.rootNode);
for (const match of matches) {
    for (const capture of match.captures) {
        console.log(capture.node.text + " (" + capture.name + ")");
    }
}
// const errorQuery = new Parser.Query(br,'(ERROR) @error')
// const errors = errorQuery.matches(tree.rootNode);
// for (const error of errors) {
//   for (const capture of error.captures) {
//     console.log(capture.node.text + " (" + capture.name + ")");
//   }
// }
// const cursor = tree.walk()
// cursor.gotoFirstChild()
// do {
//   const node = cursor.currentNode
//   console.log(cursor.nodeType);
//   if (cursor.nodeType === "line"){
//     cursor.gotoFirstChild()
//     do {
//       console.log(cursor.nodeType);
//       console.log(node.text);
//     } while (cursor.gotoNextSibling());
//     cursor.gotoParent()
//   }
// } while (cursor.gotoNextSibling());
// for (const node of tree.rootNode.namedChildren) {
//   console.log(node.type + ": " + node.text);
//   console.log([node.startIndex,node.endIndex])
// }
//# sourceMappingURL=test.js.map