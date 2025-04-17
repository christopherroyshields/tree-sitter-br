const { execSync } = require('child_process');
const path = require('path');
const pkg = require('./package.json');

const electronVersion = pkg.engines?.vscode?.replace('^', '') || '34.3.2'; // fallback
const moduleDir = path.join(__dirname, '..', 'tree-sitter-br');

console.log(`🔧 Rebuilding native module for Electron ${electronVersion}...`);

execSync(`npx node-gyp rebuild --target=${electronVersion} --dist-url=https://electronjs.org/headers`, {
  cwd: ".",
  stdio: 'inherit'
});