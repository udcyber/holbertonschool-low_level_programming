# C - Variadic functions

---

#### Table of contents
- [0. Beauty is variable, ugliness is constant](#0-beauty-is-variable-ugliness-is-constant)
- [1. To be is to be the value of a variable](#1-to-be-is-to-be-the-value-of-a-variable)
- [2. One woman's constant is another woman's variable](#2-one-womans-constant-is-another-womans-variable)
- [3. To be is a to be the value of a variable](#3-to-be-is-a-to-be-the-value-of-a-variable)
- [Requirements](#requirements)

---

#### 0. Beauty is variable, ugliness is constant

Write a function that <mark>returns the sum of all its parameters</mark>.

Prototype:
```
int sum_them_all(const unsigned int n, ...);
```
- If n == 0, return 0

desired output:  
```
1122
500
```
[^](#table-of-contents)

---

#### 1. To be is to be the value of a variable

Write a function <mark>that prints numbers</mark>, followed by a new line.

Prototype:
```
void print_numbers(const char *separator, const unsigned int n, ...);
```
- where separator is the string to be printed between numbers and
- ```n``` is the number of integers passed to the function
- You are allowed to use ```printf```
- If separator is NULL, don't print it
- Print a new line at the end of your function

desired output:  
```
0, 98, -1024, 402
```  
[^](#table-of-contents)

---

#### 2. One woman's constant is another woman's variable

Write a function that <mark>prints strings</mark>, followed by a new line.

Prototype:
```
void print_strings(const char *separator, const unsigned int n, ...);
```
- where ```separator``` is the string to be printed between the strings
- and ```n``` is the number of strings passed to the function
- You are allowed to use ```printf```
- If separator is NULL, don't print it
- If one of the string is NULL, print ```(nil)``` instead
- Print a new line at the end of your function

desired output:  
```
Jay, Django
```  
[^](#table-of-contents)

---

#### 3. To be is a to be the value of a variable

Write a function that <mark>prints anything</mark>.

Prototype: 
```
void print_all(const char * const format, ...);
```
- where ```format``` is a list of types of arguments passed to the function
- ```c```: ```char```
- ```i```: ```integer```
- ```f```: ```float```
- ```s```: ```char *``` (if the string is NULL, print ```(nil)``` instead)
- any other char should be ignored
- see example
- You are not allowed to use ```for```, ```goto```, ternary operator, ```else```, ```do ... while```
- You can use a maximum of
- 2 ```while``` loops
- 2 ```if```
- You can declare a maximum of ```9``` variables
- You are allowed to use ```printf```
- Print a new line at the end of your function

desired output:  
```
B, 3, stSchool
```  
[^](#table-of-contents)

---

#### Requirements

- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use the following macros: ```va_start```, ```va_arg``` and ```va_end```
- You are allowed to use ```_putchar```
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called ```variadic_functions.h```
- All your header files should be include guarded
  
[^](#table-of-contents)
