# This project contains basic command on Preprocessor

## 0x0D. C - Preprocessor

## Learning Objectives:

- What are macros and how to use them

- What are the most common predefined macros

- How to include guard your header files

### The C preprocessor is a macro preprocessor (allows you to define macros) that transforms your program before it is compiled, OR is a programs that process the source code before compilation.

### A macro is a piece of code in a program that is replaced by the value of the macro. Macro is defined by #define directive. Whenever a macro name is encountered by the compiler, it replaces the name with the definition of the macro.

## Definitions and Exercise:

- File: `0-object_like_macro.h` is a header file that defines a macro named SIZE as an abbreviation for the token 1024.

- File: `1-pi.h` is a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

- File: `2-main.c` is a program that prints the name of the file it was compiled from.

- File: `3-function_like_macro.h` is a function-like macro ABS(x) that computes the absolute value of a number x.

- File: `4-sum.h` is a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

- File: `_putchar.c` contains the _ putchar() function definition.
