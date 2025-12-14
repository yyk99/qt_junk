# Project Guidelines for qt_junk

## Git Commit Messages
- Do not use emoji in git messages. Use ASCII only
- Follow conventional commit format when applicable
- Reference issue numbers when relevant

## Code Style
- Follow the .editorconfig settings in each project
- Default: 4-space indentation for C++/CMake
- JSON files: 2-space indentation
- No trailing whitespace

## CMake
- Minimum CMake version: 3.21 (for CMakePresets.json support)
- Use CMakePresets.json for build configurations
- Available presets: debug, release, relwithdebinfo, windows

## Qt Development
- This is a Qt6-focused project
- Use qt_add_executable() with MANUAL_FINALIZATION for proper platform setup
- Always call qt_finalize_executable() for Qt 6 targets

## Build System
- Windows: Use Visual Studio 2022 (MSVC) with Qt 6.8.0
- Qt path: E:/Qt/6.8.0/msvc2022_64
- Build outputs go to: build/[preset-name]/
