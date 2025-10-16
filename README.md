# README

Simple float loop written in Zig and compiled for M55 with Helium vector extensions.


It uses the CMSIS build tools for building.
It targets a FVP in semihosting mode.

The `.vscode/tasks.json` contains additional tasks for building Zig code before the CMSIS solution and for disasm of the result.

The `fromelf` path is hardcoded and taken from the vcpkg. You'll have to change the path when a new version is installed by vcpkg.

This file `tasks.json` may be overwritten by the CMSIS extension. But you can revert the original file if you don't use any debugger since the CMSIS generated tasks won't be used.