# C - Hello, World

---

General

- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and - Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

Requirements

C

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file at the root of the repo, containing a description of the repository
- A README.md file, at the root of the folder of this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use system
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

Shell Scripts

- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long ($ wc -l file should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly #!/bin/bash

---

#### Table of contents
- [0. Preprocessor](#0-preprocessor)
- [1. Compiler](#1-compiler)
- [2. Assembler](#2-assembler)
- [3. Name](#3-name)
- [4. Hello, puts](#4-hello-puts)
- [5. Hello, printf](#5-hello-printf)
- [6. Size is not grandeur, and territory does not make a nation](#6-size-is-not-grandeur-and-territory-does-not-make-a-nation)

---

#### 0. Preprocessor

- Write a script that <mark>runs a C file through the preprocessor</mark> and save the result into another file named ```c```.

- The C file name will be saved in the variable ```$CFILE```.
  
[^](#table-of-contents)

---

#### 1. Compiler

- Write a script that <mark>compiles a C file but does not link</mark>.

- The C file name will be saved in the variable ```$CFILE```.
  
[^](#table-of-contents)

-----------------------------------------------------------------------------------
#### 2. Assembler

Write a script that <mark>generates the assembly code of a C code</mark> and save it in an output file.

- The C file name will be saved in the variable ```$CFILE```

- The output file should be named the same as the C file, but with the extension ```.s``` instead of ```.c```.
  
[^](#table-of-contents)

-----------------------------------------------------------------------------------
#### 3. Name

- Write a script that <mark>compiles a C file and creates an executable named cisfun</mark>.

- The C file name will be saved in the variable ```$CFILE```
  
[^](#table-of-contents)

-----------------------------------------------------------------------------------
#### 4. Hello, puts

Write a C program that <mark>prints exactly</mark>
```
"Programming is like building a multilingual puzzle
```
followed by a new line.

- Use the function ```puts```
- You are not allowed to use ```printf```
- Your program should end with the value ```0```
  
[^](#table-of-contents)

-----------------------------------------------------------------------------------
#### 5. Hello, printf

Write a C program that <mark>prints exactly</mark> 
```
with proper grammar, but the outcome is a piece of art,
```
followed by a new line.

- Use the function ```printf```
- You are not allowed to use the function ```puts```
- Your program should return ```0```
- Your program should compile without warning when using the ```-Wall gcc``` option
  
[^](#table-of-contents)

---

#### 6. Size is not grandeur, and territory does not make a nation

Write a C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return 0
- If you are using a linux on Vagrant you might have to install the package libc6-dev-i386 to test the -m32 gcc option (normally you dont need to do anything on your sandbox).
```
julien@ubuntu:~/c/$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/$ echo $?
0
julien@ubuntu:~/c/$ 
```
Repo:

GitHub repository: holbertonschool-low_level_programming  
Directory: hello_world  
File: 6-size.c  
