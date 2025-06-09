const assert = require("node:assert");
const { test } = require("node:test");

const Parser = require("tree-sitter");

test("can load grammar", () => {
  const parser = new Parser();
  assert.doesNotThrow(() => parser.setLanguage(require(".")));
});

test("can parse basic program", () => {
  const parser = new Parser();
  parser.setLanguage(require("."));
  const tree = parser.parse("10 PRINT 'Hello'");
  assert.equal(tree.rootNode.type, "source_file");
  assert.equal(tree.rootNode.children[0].type, "line");
});

test("can parse multiple statements", () => {
  const parser = new Parser();
  parser.setLanguage(require("."));
  const tree = parser.parse(`
    10 LET A = 5
    20 PRINT A
    30 END
  `);
  assert.equal(tree.rootNode.type, "source_file");
  assert.equal(tree.rootNode.children.length, 3);
  assert.equal(tree.rootNode.children[0].type, "line");
  assert.equal(tree.rootNode.children[1].type, "line"); 
  assert.equal(tree.rootNode.children[2].type, "line");
});
