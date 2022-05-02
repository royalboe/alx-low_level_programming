# 0x15. C - File I/O

## Description
- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
- How to use the I/O system calls open, close, read and write
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
- How to create, open, close, read and write files
- What are file permissions, and how to set them when creating a file with the open system call
- What is a system call
- What is the difference between a function and a system call

## Table of contents

Files | Description
----------- | -----------
[.gitignore](./.gitignore) | Ignore compiled program and test files.
[main.h](./main.h) | Header File
[0-read_textfile.c](./0-read_textfile.c) | Function that reads a text file and prints it to the POSIX standard output. Prototype: ssize_t read_textfile(const char *filename, size_t letters);
[1-create_file.c](./1-create_file.c) | Function that creates a file. Prototype: int create_file(const char *filename, char *text_content);
[2-append_text_to_file.c](./2-append_text_to_file.c) | Function that appends text at the end of a file. Prototype: int append_text_to_file(const char *filename, char *text_content);
[3-cp.c](./3-cp.c) | Program that copies the content of a file to another file. Usage: cp file_from file_to
[100-elf_header.c](./100-elf_header.c) | Program that displays the information contained in the ELF header at the start of an ELF file. Usage: elf_header elf_filename
