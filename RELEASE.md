# Release Guide for tree-sitter-br

This guide describes how to create and publish a new release of tree-sitter-br.

## Prerequisites

- Node.js 20+ installed
- npm account with publish access to `tree-sitter-br`
- Git repository with push access
- Access to different platforms for building prebuilds (or use CI)

## Release Checklist

### 1. Test Everything

```bash
# Run tests
npm test

# Test the binding
node bindings/node/binding_test.js

# Parse example files
tree-sitter parse example.brs
```

### 2. Build Prebuilds

Build prebuilt binaries for each platform you have access to:

#### On Windows (x64)
```bash
npm run prebuild
```

#### On macOS
```bash
# For Intel Macs or Apple Silicon building for x64
npm run prebuild -- --arch=x64

# For Apple Silicon (M1/M2/M3)
npm run prebuild -- --arch=arm64
```

#### On Linux
```bash
npm run prebuild
```

#### For Electron (optional)
```bash
# Run on each platform
npm run prebuild:electron
```

### 3. Verify Prebuilds

Check that prebuilds were created:
```bash
ls -la prebuilds/
```

You should see files like:
- `win32-x64/tree-sitter-br.node`
- `darwin-x64/tree-sitter-br.node`
- `darwin-arm64/tree-sitter-br.node`
- `linux-x64/tree-sitter-br.node`

### 4. Update Version

```bash
# Bump version (choose patch, minor, or major)
npm version patch  # for bug fixes
npm version minor  # for new features
npm version major  # for breaking changes
```

This will:
- Update version in package.json
- Create a git commit
- Create a git tag

### 5. Update Changelog (if you have one)

Add release notes describing:
- New features
- Bug fixes
- Breaking changes
- Credits to contributors

### 6. Push to GitHub

```bash
# Push commits and tags
git push origin main --follow-tags
```

### 7. Create GitHub Release

1. Go to https://github.com/your-username/tree-sitter-br/releases
2. Click "Create a new release"
3. Select the tag you just created
4. Add release notes
5. Attach any additional artifacts if needed
6. Click "Publish release"

### 8. Publish to npm

```bash
# Make sure you're logged in
npm whoami

# Publish to npm
npm publish
```

### 9. Verify Publication

```bash
# Check npm
npm view tree-sitter-br

# Test installation in a new directory
cd /tmp
npm install tree-sitter-br
node -e "console.log(require('tree-sitter-br'))"
```

## Platform Build Matrix

| Platform | Command | Notes |
|----------|---------|-------|
| Windows x64 | `npm run prebuild` | Build on Windows |
| macOS x64 | `npm run prebuild -- --arch=x64` | Build on any macOS |
| macOS ARM64 | `npm run prebuild -- --arch=arm64` | Build on Apple Silicon |
| Linux x64 | `npm run prebuild` | Build on Linux |
| Electron (all) | `npm run prebuild:electron` | Build on each platform |

## Troubleshooting

### Missing Prebuilds
If you can't build for all platforms:
- It's OK to release with partial platform coverage
- Users without prebuilds will compile from source automatically
- Consider using GitHub Actions for automated builds

### Build Failures
- Ensure `tree-sitter generate` runs successfully
- Check that `src/scanner.c` exists
- Verify Node.js and build tools are installed

### npm Publish Issues
- Ensure you're logged in: `npm login`
- Check you have publish rights: `npm owner ls tree-sitter-br`
- Try `npm publish --dry-run` first to test

## Using GitHub Actions for Prebuilds

The repository includes `.github/workflows/prebuild.yml` which can build prebuilds automatically. To use it:

1. Push a tag starting with `v` (e.g., `v0.25.3`)
2. GitHub Actions will build for all platforms
3. Download the artifacts from the Actions run
4. Extract them to the `prebuilds/` folder
5. Then continue with npm publish

## Version Numbering

Follow semantic versioning:
- **MAJOR** (1.0.0): Breaking changes to the API
- **MINOR** (0.1.0): New features, backward compatible
- **PATCH** (0.0.1): Bug fixes, backward compatible

## Quick Release (if you have all platforms)

```bash
# 1. Test
npm test

# 2. Build prebuilds (on each platform)
npm run prebuild

# 3. Bump version
npm version patch

# 4. Push
git push origin main --follow-tags

# 5. Publish
npm publish
```

## Notes

- Prebuilds are optional but highly recommended for better user experience
- The `node-gyp-build` package automatically selects the right prebuild
- If no prebuild matches, it falls back to compiling from source
- Include `prebuilds/` in your `.gitignore` to avoid committing large binaries