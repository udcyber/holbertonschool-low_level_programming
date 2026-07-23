# C - Recursion
--------------------------------------------------------

#### Table of contents
- [0.](#0)
- [1.](#1)
- [2.](#2)
- [3.](#3)
- [4.](#4)
- [5.](#5)
- [6.](#6)
- [Requirements](#requirements)

--------------------------------------------------------
#### 0.

Write a function that <mark>prints a string</mark>, followed by a new line.

Prototype: 
```
void _puts_recursion(char *s);  
```

desired output:  
```
Puts with recursion
```

FYI: The standard library provides a similar function: ```puts```.  
Run ```man puts``` to learn more.

[^](#table-of-contents)

--------------------------------------------------------
#### 1.

Write a function that <mark>prints a string in reverse</mark>.

Prototype:  
```
void _print_rev_recursion(char *s);
```

desired output:  
```
reklaW notloC
```

[^](#table-of-contents)

--------------------------------------------------------
#### 2.

Write a function that <mark>returns the length of a string</mark>.

Prototype:  
```
int _strlen_recursion(char *s);
```

FYI: The standard library provides a similar function: ```strlen```.  
Run ```man strlen``` to learn more.

desired output:  
```
14
```

[^](#table-of-contents)

--------------------------------------------------------
#### 3.

Write a function that <mark>returns the factorial of a given number</mark>.

Prototype:  
```
int factorial(int n);
```

- If ```n``` is lower than ```0```, the function should return ```-1``` to indicate an error
- Factorial of ```0``` is ```1```

desired output:  
```
1
120
3628800
-1
```

[^](#table-of-contents)

--------------------------------------------------------
#### 4.

Write a function that <mark>returns the value of ```x``` raised to the power of ```y```</mark>.

Prototype:  
```
int _pow_recursion(int x, int y);
```

- If ```y``` is lower than ```0```, the function should return ```-1```  

FYI: The standard library provides a different function: ```pow```.  
Run ```man pow``` to learn more.

desired output:  
```
1
1
65536
25
-1
-125
```

[^](#table-of-contents)

--------------------------------------------------------
#### 5.

Write a function that <mark>returns the natural square root of a number</mark>.

Prototype:  
```
int _sqrt_recursion(int n);
```

- If ```n``` does not have a natural square root, the function should return ```-1```
  
FYI: The standard library provides a different function: ```sqrt```.  
Run ```man sqrt``` to learn more.

desired output:  
```
1
32
4
-1
5
-1
```

[^](#table-of-contents)

--------------------------------------------------------
#### 6.

Write a function that <mark>returns 1 if the input integer is a prime number, otherwise return 0</mark>.

Prototype:  
```
int is_prime_number(int n);
```

desired output:  
```
0
0
0
1
0
0
1
1
```

[^](#table-of-contents)

--------------------------------------------------------
#### Requirements

- All your files will be compiled on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
- All your files should end with a new line
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use ```_putchar```
- The prototypes of all your functions and the prototype of the function ```_putchar``` should be included in your header file called ```main.h```
- You are not allowed to use any kind of loops
- You are not allowed to use static variables
  
[^](#table-of-contents)
