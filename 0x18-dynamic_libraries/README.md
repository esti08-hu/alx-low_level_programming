### 0x18. C - Dynamic Libraries

## Overview
This project, authored by Estifanos Ameha, explores dynamic libraries in C programming. The main learning objectives include understanding what dynamic libraries are, how they work, creating them, and using them. Additionally, the project covers the environment variable $LD_LIBRARY_PATH, differences between static and shared libraries, and basic usage of tools like nm, ldd, and ldconfig.

### Resources
Difference between Dynamic and Static library
Creating dynamic libraries on Linux
Technical Writing
Learning Objectives
By the end of this project, you should be able to explain:

What a dynamic library is, how it works, and how to create and use one.
The purpose of the environment variable $LD_LIBRARY_PATH and how to use it.
Differences between static and shared libraries.
Basic usage of tools like nm, ldd, and ldconfig.
Requirements
### C
Allowed editors: vi, vim, emacs
Compilation on Ubuntu 20.04 LTS using gcc with specific options
Files should end with a new line
Use the Betty style for code
No global variables allowed
No more than 5 functions per file
No standard library functions like printf, puts, etc.
Use of _putchar allowed
Header file named main.h containing prototypes of functions and _putchar
Don't forget to push the header file
### Bash
Allowed editors: vi, vim, emacs
Scripts tested on Ubuntu 20.04 LTS
Files should end with a new line
First line of all scripts should be #!/bin/bash
A README.md file describing each script
All files must be executable
### Tasks
0. A library is not a luxury but one of the necessities of life
Create the dynamic library libdynamic.so containing specified functions.

1. Without libraries what have we? We have no past and no future
Create a script to generate a dynamic library liball.so from all .c files in the current directory.

2. Let's call C functions from Python
Create a dynamic library containing C functions callable from Python.

3. Code injection: Win the Giga Millions!
Create a shell script with a maximum of three lines that runs two commands on the server, helping you win the Giga Millions.

For detailed examples and commands, refer to the original README.md file in the repository.

### Repository:

GitHub repository: alx-low_level_programming
Directory: 0x18-dynamic_libraries