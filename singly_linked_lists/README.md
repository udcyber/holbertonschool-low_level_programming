## C - Singly linked lists
-----------------------------------------------------------------------
#### Table of contents
- [0. Print list](#0-print-list)
- [1. List length](#1-list-length)
- [2. Add node](#2-add-node)
- [3. Add node at the end](#3-add-node-at-the-end)
- [4. Free list](#4-free-list)
- [Requirements](#requirements)

-----------------------------------------------------------------------
#### 0. Print list

Write a function that <mark>prints all the elements</mark> of a ```list_t``` list.

Prototype:  
```
size_t print_list(const list_t *h);
```
- Return: the number of nodes
- Format: see example
- If ```str``` is ```NULL```, print ```[0] (nil)```
- You are allowed to use ```printf```
  
desired output:  
```
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
```
  
[^](#table-of-contents)

-----------------------------------------------------------------------
#### 1. List length

Write a function that <mark>returns the number of elements</mark> in a linked ```list_t``` list.

Prototype:  
```
size_t list_len(const list_t *h);
```
  
desired output:  
```
-> 2 elements
```
  
[^](#table-of-contents)

-----------------------------------------------------------------------
#### 2. Add node

Write a function that <mark>adds a new node at the beginning</mark> of a ```list_t``` list.

Prototype:  
```
list_t *add_node(list_t **head, const char *str);
```
  
- Return: the address of the new element, or ```NULL``` if it failed
- ```str``` needs to be duplicated
- You are allowed to use ```strdup```
  
desired output:  
```
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
```
  
[^](#table-of-contents)

-----------------------------------------------------------------------
#### 3. Add node at the end

Write a function that <mark>adds a new node at the end</mark> of a ```list_t``` list.

Prototype:  
```
list_t *add_node_end(list_t **head, const char *str);
```
  
- Return: the address of the new element, or ```NULL``` if it failed
- ```str``` needs to be duplicated
- You are allowed to use ```strdup```
  
desired output:  
```
[4] Anne
[6] Colton
[6] Corbin
[6] Daniel
[6] Danton
[5] David
[4] Gary
[6] Holden
[3] Ian
[3] Ian
[3] Jay
[6] Jennie
[5] Jimmy
[6] Justin
[6] Kalson
[4] Kina
[7] Matthew
[3] Max
[7] Michael
[4] Ntuj
[6] Philip
[7] Richard
[8] Samantha
[6] Stuart
[5] Swati
[7] Timothy
[6] Victor
[6] Walton
```
  
[^](#table-of-contents)

-----------------------------------------------------------------------
#### 4. Free list

Write a function that <mark>frees a ```list_t``` list</mark>.

Prototype:  
```
void free_list(list_t *head);
```
  
desired output:  
```
==3598== Memcheck, a memory error detector
==3598== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3598== Command: ./e
==3598== 
[3] Bob
[1] &
[3] Kris
[4] love
[3] asm
==3598== 
==3598== HEAP SUMMARY:
==3598==     in use at exit: 0 bytes in 0 blocks
==3598==   total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated
==3598== 
==3598== All heap blocks were freed -- no leaks are possible
==3598== 
==3598== For counts of detected and suppressed errors, rerun with: -v
==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
  
[^](#table-of-contents)

-----------------------------------------------------------------------
#### Requirements

- Allowed editors: ```vi```, ```vim```, ```emacs```
- All your files will be compiled on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
- All your files should end with a new line
- A ```README.md``` file, at the root of the folder of the project is mandatory
Your code should use the ```Betty``` style. It will be checked using ```betty-style.pl``` and ```betty-doc.pl```
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are ```malloc```, ```free``` and ```exit```. Any use of functions like ```printf```, ```puts```, ```calloc```, ```realloc``` etc… is forbidden
- You are allowed to use ```_putchar```
- You don't have to push ```_putchar.c```, we will use our file. If you do it won't be taken into account
- In the following examples, the ```main.c``` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own ```main.c``` files at compilation. Our ```main.c``` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function ```_putchar``` should be included in your header file called ```lists.h```
- Don't forget to push your header file
- All your header files should be include guarded

[^](#table-of-contents)
