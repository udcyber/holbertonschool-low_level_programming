# C - Pointers, arrays and strings

---

#### Table of content
- [0.](#0)
- [1.](#1)
- [2.](#2)
- [3.](#3)
- [4.](#4)
- [5.](#5)
- [6.](#6)
- [7.](#7)
- [8.](#8)
- [9.](#9)
- [Requirements](#requirements)

----------------------------------------------------------------

#### 0. 

Write a function that <mark>takes a pointer to an int as parameter</mark> and <mark>updates the value it points to to 98</mark>.

Prototype:
```
void reset_to_98(int *n);
```  

desired output:  
```
n=402
n=98
```

[^](#table-of-content)

----------------------------------------------------------------
#### 1.

Write a function that <mark>swaps the values of two integers</mark>.

Prototype:
```
void swap_int(int *a, int *b);
```

desired output:  
```
a=98, b=42
a=42, b=98
```

[^](#table-of-content)

----------------------------------------------------------------
#### 2.

Write a function that <mark>returns the length of a string</mark>.

Prototype:
```
int _strlen(char *s);
```

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
  
desired output:  
```
16
```
  
[^](#table-of-content)

----------------------------------------------------------------
#### 3.

Write a function that <mark>prints a string</mark>, followed by a new line, to stdout.

Prototype:
```
void _puts(char *str);
```

FYI: The standard library provides a similar function: ```puts```.  
Run ```man puts``` to learn more.

desired output:  
```
I do not fear computers. I fear the lack of them - Isaac Asimov
```
  
[^](#table-of-content)

----------------------------------------------------------------
#### 4.

Write a function that <mark>prints a string, in reverse</mark>, followed by a new line.

Prototype:
```
void print_rev(char *s);
```

desired output:  
```
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
```

[^](#table-of-content)

----------------------------------------------------------------
#### 5.

Write a function that <mark>reverses a string</mark>.

Prototype:
```
void rev_string(char *s);
```  

desired output: 
``` 
My School
loohcS yM
```
  
[^](#table-of-content)

----------------------------------------------------------------
#### 6.

Write a function that prints <mark>every other character of a string</mark>, starting with the first character, followed by a new line.

Prototype:
```
void puts2(char *str);
```  

desired output:  
``` 
02468
``` 
  
[^](#table-of-content)

----------------------------------------------------------------
#### 7.

Write a function that <mark>prints half of a string</mark>, followed by a new line.

Prototype:
```
void puts_half(char *str);
```
- The function should print the second half of the string
- If the number of characters is odd, the function should print the last ```n``` characters of the string, where ```n = (length_of_the_string + 1) / 2```

desired output:  
```
56789
```
[^](#table-of-content)

----------------------------------------------------------------
#### 8.

Write a function that <mark>prints ```n``` elements of an array of integers</mark>, followed by a new line.

Prototype:
```
void print_array(int *a, int n);
```
- Where ```n``` is the number of elements of the array to be printed
- Numbers must be separated by comma, followed by a space
- The numbers should be displayed in the same order as they are stored in the array
- You are allowed to use ```printf```  

desired output:  
```
98, 402, -198, 298, -1024
```
  
[^](#table-of-content)

----------------------------------------------------------------
#### 9.

Write a function that copies the string pointed to by ```src```, including the terminating null byte ```\0```, to the buffer pointed to by ```dest```.

- Return value: the pointer to ```dest```
  
Prototype:
```
char *_strcpy(char *dest, char *src);
```

desired output:  
```
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
```
  
FYI: The standard library provides a similar function: ```strcpy```.  
Run ```man strcpy``` to learn more.  
[^](#table-of-content)

----------------------------------------------------------------
#### 10.

Write a function that convert a string to an integer.

Prototype:
```
int _atoi(char *s);
```
- The number in the string can be preceded by an infinite number of characters
- You need to take into account all the ```-``` and ```+``` signs before the number
- If there are no numbers in the string, the function must return ```0```
- You are not allowed to use ```long```
- You are not allowed to declare new variables of "type" array
- You are not allowed to hard-code special values
- We will use the ```-fsanitize=signed-integer-overflow``` gcc flag to compile your code.
  
desired output:  
```
98
-402
-98
214748364
0
402
98
402
```
  
FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.
[^](#table-of-content)

----------------------------------------------------------------

#### Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don't have to push _putchar.c, we will use our file. If you do it won't be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don't forget to push your header file