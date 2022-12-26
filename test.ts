import Parser from 'tree-sitter'
const br = require('./')
import fs from 'fs'

const parser = new Parser()
parser.setLanguage(br)

const tree = parser.parse(fs.readFileSync("./example.brs").toString());

const refQuery = `(numberreference) @numberref
(stringidentifier) @stringref`


const query = new Parser.Query(br, refQuery)
const matches = query.matches(tree.rootNode);

for (const match of matches) {
  for (const capture of match.captures) {
    console.log(capture.node.text + " (" + capture.name + ")");
  }
}

const errorQuery = new Parser.Query(br,'(ERROR) @error')
const errors = errorQuery.matches(tree.rootNode);

for (const error of errors) {
  for (const capture of error.captures) {
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