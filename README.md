# README

It uses the CMSIS build tools for building.
It targets a FVP in semihosting mode.

The `.vscode/tasks.json` contains additional tasks for building Zig codebefore the CMSIS solution and for disasm of the result.

This file may be overwritten by the CMSIS extension. But you can revert the original file if you don't use any debugger since the CMSIS generated tasks won't be used.