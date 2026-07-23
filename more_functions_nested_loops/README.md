C - More functions, more nested loops
----------------------------------------------------------------

#### Table of contents
- [0. isupper](#0-isupper)
- [1. isdigit](#1-isdigit)
- [2. Collaboration is multiplication](#2-collaboration-is-multiplication)
- [3. The numbers speak for themselves](#3-the-numbers-speak-for-themselves)
- [4. I believe in numbers and signs](#4-i-believe-in-numbers-and-signs)
- [5. Numbers constitute the only universal language](#5-numbers-constitute-the-only-universal-language)
- [6. The shortest distance between two points is a straight line](#6-the-shortest-distance-between-two-points-is-a-straight-line)
- [7. I feel like I am diagonally parked in a parallel universe](#7-i-feel-like-i-am-diagonally-parked-in-a-parallel-universe)
- [8. You are so much sunshine in every square inch](#8-you-are-so-much-sunshine-in-every-square-inch)
- [9. Fizz-Buzz](#9.-fizzbuzz)
- [10. Triangles](#10-triangles)
- [Requirements](#requirements)

----------------------------------------------------------------
#### 0. isupper

Write a function that <mark>checks for uppercase character</mark>.

Prototype:
```
int _isupper(int c);
```
- Returns 1 if c is uppercase
- Returns 0 otherwise

FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.    
```
A: 1
a: 0
```  
[^](#table-of-contents)

----------------------------------------------------------------
#### 1. isdigit

Write a function that <mark>checks for a digit (0 through 9)</mark>.

Prototype:
```
int _isdigit(int c);
```
- Returns 1 if c is a digit
- Returns 0 otherwise

FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.  
```
0: 1
a: 0
```  
[^](#table-of-contents)

----------------------------------------------------------------
#### 2. Collaboration is multiplication

Write a function that <mark>multiplies two integers</mark>.

Prototype:
```
int mul(int a, int b);
``` 
desired output:   
```
100352
-1646592
```
[^](#table-of-contents)

----------------------------------------------------------------
#### 3. The numbers speak for themselves

Write a function that <mark>prints the numbers, from 0 to 9</mark>, followed by a new line.

Prototype:
```
void print_numbers(void);
```
- You can only use ```_putchar``` twice in your code  

desired output:  
```
0123456789
```
[^](#table-of-contents)

----------------------------------------------------------------
#### 4. I believe in numbers and signs

Write a function that <mark>prints the numbers, from 0 to 9</mark>, followed by a new line.

Prototype:
```
void print_most_numbers(void);
```
- Do not print 2 and 4
- You can only use ```_putchar``` twice in your code  

desired output:  
```
01356789
```  
[^](#table-of-contents)

----------------------------------------------------------------
#### 5. Numbers constitute the only universal language

Write a function that <mark>prints 10 times the numbers, from 0 to 14</mark>, followed by a new line.

Prototype:
```
void more_numbers(void);
```
- You can only use ```_putchar``` three times in your code
```
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
```  
[^](#table-of-contents)

----------------------------------------------------------------
#### 6. The shortest distance between two points is a straight line

Write a function that <mark>draws a straight line</mark> in the terminal.

Prototype:
```
void print_line(int n);
```
- You can only use ```_putchar``` function to print
- Where ```n``` is the number of times the character ```_``` should be printed
- The line should end with a ```\n```
- If ```n``` is ```0``` or less, the function should only print ```\n```  

desired output:  
```
$
__$
__________$
$
```
[^](#table-of-contents)

----------------------------------------------------------------
#### 7. I feel like I am diagonally parked in a parallel universe

Write a function that <mark>draws a diagonal line on the terminal</mark>.

Prototype:
```
void print_diagonal(int n);
```
- You can only use ```_putchar``` function to print
- Where ```n``` is the number of times the character ```\``` should be printed
- The diagonal should end with a ```\n```
- If ```n``` is ```0``` or less, the function should only print a ```\n```

desired output:
```
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
```  
[^](#table-of-contents)

----------------------------------------------------------------
#### 8. You are so much sunshine in every square inch

Write a function that <mark>prints a square</mark>, followed by a new line.

Prototype:
```
void print_square(int size);
```
- You can only use ```_putchar``` function to print
- Where ```size``` is the size of the square
- If size is ```0``` or less, the function should print only a new line
- Use the character ```#``` to print the square  

desired output:  
```
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########
```  

[^](#table-of-contents)

----------------------------------------------------------------
#### 9. Fizz-Buzz

Write a program that <mark>prints the numbers from 1 to 100</mark>, followed by a new line. But for <mark>multiples of 3 print Fizz</mark> instead of the number and for the <mark>multiples of 5 print Buzz</mark>. For numbers which are <mark>multiples of both 3 and 5</mark> print <mark>FizzBuzz</mark>.

- Each number or word should be separated by a space  
- You are allowed to use the standard library  

desired output:  
```
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
```  

[^](#table-of-contents)

----------------------------------------------------------------
#### 10. Triangles

Write a function that <mark>prints a triangle</mark>, followed by a new line.

Prototype:
```
void print_triangle(int size);
```  
- You can only use ```_putchar``` function to print
- Where ```size``` is the size of the triangle
- If size is ```0``` or less, the function should print only a new line
- Use the character ```#``` to print the triangle  

desired output:
```
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

```

[^](#table-of-contents)  
----------------------------------------------------------------
#### Requirements

- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
  
[^](#table-of-contents)  
