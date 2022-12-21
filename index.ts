import Parser from 'tree-sitter'
import br = require('../tree-sitter-br')
import fs from 'fs'

const parser = new Parser()
parser.setLanguage(br)

const tree = parser.parse(fs.readFileSync("./example.brs").toString());

console.log(tree.rootNode.toString());

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