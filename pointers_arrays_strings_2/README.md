# C - More pointers, arrays and strings

---

0. strcat

Write a function that <mark>concatenates two strings</mark>.

Prototype:
```
char *_strcat(char *dest, char *src);
```
- This function appends the ```src``` string to the ```dest``` string, overwriting the terminating null byte ```\0``` at the end of ```dest```, and then adds a terminating null byte
- Returns a pointer to the resulting string ```dest```

FYI: The standard library provides a similar function: ```strcat```. Run ```man strcat``` to learn more.

desired output:  
```
Hello 
World!
Hello World!
World!
Hello World!
```

----------------------------------------------------------------
1. strncat

Write a function that <mark>concatenates two strings</mark>.

Prototype:  
```
char *_strncat(char *dest, char *src, int n);
```
- The _strncat function is similar to the _strcat function, except that
- it will use at most n bytes from src; and
- src does not need to be null-terminated if it contains n or more bytes
- Return a pointer to the resulting string dest
  
desired output:  
```
Hello 
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
```
FYI: The standard library provides a similar function: strncat. Run man strncat to learn more

----------------------------------------------------------------
2. strncpy

Write a function that <mark>copies a string</mark>.

Prototype: 
```
char *_strncpy(char *dest, char *src, int n);
```

desired output:  
```
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
```
Your function should work exactly like strncpy
FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.

----------------------------------------------------------------
3. strcmp

Write a function that <mark>compares two strings</mark>.

Prototype:  
```
int _strcmp(char *s1, char *s2);
```
desired output:  
```
-15
15
0
```
Your function should work exactly like strcmp
FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.

----------------------------------------------------------------
4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

Write a function that <mark>reverses the content of an array of integers</mark>.

Prototype:  
```
void reverse_array(int *a, int n);
```
desired output:  
```
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
```
Where n is the number of elements of the array

----------------------------------------------------------------
5. Always look up

Write a function that changes all lowercase letters of a string to uppercase.

Prototype:  
```
char *string_toupper(char *);
```
desired output:  
```
LOOK UP!
LOOK UP!
```

----------------------------------------------------------------
6. Expect the best. Prepare for the worst. Capitalize on what comes

Write a function that capitalizes all words of a string.

Prototype:  
```
char *cap_string(char *);
```
desired output:  
```
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World    Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World    Hello World.Hello World
```
Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

----------------------------------------------------------------
7. Mozart composed his music not for the elite, but for everybody

Write a function that encodes a string into 1337.

Letters a and A should be replaced by 4
Letters e and E should be replaced by 3
Letters o and O should be replaced by 0
Letters t and T should be replaced by 7
Letters l and L should be replaced by 1

Prototype:
```
char *leet(char *);
```
desired output:  
```
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
```
  
You can only use one if in your code
You can only use two loops in your code
You are not allowed to use switch
You are not allowed to use any ternary operation

----------------------------------------------------------------
