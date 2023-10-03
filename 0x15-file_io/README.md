# This project contain details about File I/O

## 0x15. C - File I/O

## Learning Objectives:

- How to create, open, close, read and write files

- What are file descriptors

- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names

- How to use the I/O system calls open, close, read and write

- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR

- What are file permissions, and how to set them when creating a file with the open system call

- What is a system call

- What is the difference between a function and a system call

### A file represents a sequence of bytes, regardless of it being a text file or a binary file. C programming language provides access on high level functions as well as low level (OS level) calls to handle file on your storage devices.

## Definitions and Exercise:

- File: `0-read_textfile.c` is a function that reads a text file and prints it to the POSIX standard output.

- File: `1-create_file.c` is a function that creates a file.

- File: `2-append_text_to_file.c` is a function that appends text at the end of a file.

- File: `3-cp.c` is a program that copies the content of a file to another file.

- File: `100-elf_header.c` is a program that displays the information contained in the ELF header at the start of an ELF file.

- File: `main.h` is the header file that contains all the prototype functions used during this project.

- File: `_putchar.c` contains the putchar() function.
