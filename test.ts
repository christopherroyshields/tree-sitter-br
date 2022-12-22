import Parser from 'tree-sitter'
const {Query} = Parser
const br = require('./')
import fs from 'fs'

const parser = new Parser()
parser.setLanguage(br)

const tree = parser.parse(fs.readFileSync("./example.brs").toString());

const refQuery = `(stringidentifier) @stringref
(stringidentifier) @ref2`

const query = new Query(br, refQuery)
const matches = query.matches(tree.rootNode);

console.log(matches);

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