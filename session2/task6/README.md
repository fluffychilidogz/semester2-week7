# Task 6: Dynamic Analysis of C Programs

## Address Sanitizer (ASan)

1. This directory contains several small demo programs:

   - `noleak.c`
   - `leak.c`
   - `use_after.c`
   - `heap_over.c`
   - `stack_over.c`

   For each of these programs, use the provided makefile to compile the
   program, then run it. For example, to compile `leak.c`, enter

       make leak

   You should find that all of them except `stack_over.c` compile without
   any warnings, and all of them except `stack_over` run without any
   run-time errors.

2. Edit `Makefile` and remove the `#` from the definition of the `CFLAGS`
   variable, so that it looks like this:

       CFLAGS = -g -fsanitize=address -fno-omit-frame-pointer

3. Remove all the executables by entering `make clean`, then repeat step 1.
   The `noleak` program should run without any problems, but for each of the
   others, ASan should abort the program and display detailed diagnostic
   information in the terminal.

4. As a final example, consider the `testlogin` program from Task 3.
   Compile this with ASan using

       make testlogin

   Try running with these inputs:

       penguin
       xxxxxxx
       xxxxxxxxxx

   The first and second of these should give you "Login succeeded" and
   "Login failed" messages, as before. The third should trigger ASan and
   display diagnostic information in the terminal.

## Valgrind
