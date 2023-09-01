# This project describe how to create a static library and contains main files. 

## 0x09. C - Static libraries

## Learning Objectives:

- What is a static library, how does it work, how to create one, and how to use it

- Basic usage of ar, ranlib, nm

###  static library is a compiled object file containing all symbols required by the main program to operate (functions, variables etc.) as opposed to having to pull in separate entities.

- File: `libmy.a` the static library libmy.a containing all the functions.

- File: `main.h` is the header file containing all the function prototypes used in this project.

- File: `create_static_lib.sh` is a script that creates a static library called liball.a from all the .c files that are in the current directory.
