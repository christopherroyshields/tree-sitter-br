// const Lang = require('.');
const Lang = require('.');
console.log(Lang.name); // should print something like 'br'
console.log(typeof Lang); // should be 'object'
console.log(Lang); // should be 'object'
import Parser from "tree-sitter";
const parser = new Parser();

parser.setLanguage(Lang);