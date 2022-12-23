"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
const tree_sitter_1 = __importDefault(require("tree-sitter"));
const br = require('./');
const fs_1 = __importDefault(require("fs"));
const parser = new tree_sitter_1.default();
parser.setLanguage(br);
const tree = parser.parse(fs_1.default.readFileSync("./example.brs").toString());
const refQuery = `(numberreference (numberidentifier) @numberref)
(stringidentifier) @stringref`;
const query = new tree_sitter_1.default.Query(br, refQuery);
const matches = query.matches(tree.rootNode);
for (const match of matches) {
    for (const capture of match.captures) {
        console.log(capture.node.text + " (" + capture.name + ")");
    }
}
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