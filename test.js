"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
// const Lang = require('.');
const Lang = require('.');
console.log(Lang.name); // should print something like 'br'
console.log(typeof Lang); // should be 'object'
console.log(Lang); // should be 'object'
const tree_sitter_1 = __importDefault(require("tree-sitter"));
const parser = new tree_sitter_1.default();
parser.setLanguage(Lang);
//# sourceMappingURL=test.js.map