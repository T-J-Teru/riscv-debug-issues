# RiscV GCC/GDB Debug Issues

This repository is a collection of examples where I think that the
generated RiscV DWARF information, and in some cases possibly the
generated code, might be incorrect, leading to a poor, or incorrect
debugging experience in GDB.

Right now, most of these cases are stripped down examples pulled from
the GDB test suite.

Each sub-directory should contain its own README file that describes
the issue, and steps to reproduce.