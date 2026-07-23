## C - Doubly linked lists
-------------------------------------------
#### Table of contents  
- [0. >>> ht = {}](#0--ht--)
- [1. djb2](#1-djb2)
- [2. key -> index](#2-key---index)
- [3. >>> ht['betty'] = 'cool'](#3--htbetty--cool)
- [4. >>> ht['betty']](#4--htbetty)
- [5. >>> print(ht)](#5--printht)
- [6. >>> del ht](#6--del-ht)
- [Requirements](#requirements)

-------------------------------------------
#### 0. >>> ht = {}
  
Write a function that <mark>creates a hash table</mark>.

Prototype:  
```
hash_table_t *hash_table_create(unsigned long int size);
```

- where ```size``` is the size of the array
- Returns a pointer to the newly created hash table
- If something went wrong, your function should return ```NULL```
 
desired output:  
```
0x238a010
```
```
==7602== Memcheck, a memory error detector
==7602== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==7602== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==7602== Command: ./a
==7602== 
0x51fc040
==7602== 
==7602== HEAP SUMMARY:
==7602==     in use at exit: 8,208 bytes in 2 blocks
==7602==   total heap usage: 2 allocs, 0 frees, 8,208 bytes allocated
==7602== 
==7602== LEAK SUMMARY:
==7602==    definitely lost: 16 bytes in 1 blocks
==7602==    indirectly lost: 8,192 bytes in 1 blocks
==7602==      possibly lost: 0 bytes in 0 blocks
==7602==    still reachable: 0 bytes in 0 blocks
==7602==         suppressed: 0 bytes in 0 blocks
==7602== Rerun with --leak-check=full to see details of leaked memory
==7602== 
==7602== For counts of detected and suppressed errors, rerun with: -v
==7602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
  
[^](#table-of-contents)

-------------------------------------------
#### 1. djb2

Write a hash function <mark>implementing the djb2 algorithm</mark>.

Prototype:
```
unsigned long int hash_djb2(const unsigned char *str);
```
  
- You are allowed to copy and paste the function from ```hash_djb2.c```
  
desired output:  
```
6953392314605
3749890792216096085
5861846
```
  
[^](#table-of-contents)

-------------------------------------------
#### 2. key -> index

Write a function that <mark>gives you the index of a key</mark>.

Prototype:  
```
unsigned long int key_index(const unsigned char *key, unsigned long int size);
```
  
- where ```key``` is the key
- and ```size``` is the size of the array of the hash table
- This function should use the ```hash_djb2``` function that you wrote earlier
- Returns the index at which the key/value pair should be stored in the array of the hash table
- You will have to use this hash function for all the next tasks
desired output:  
```
6953392314605
237
3749890792216096085
341
5861846
470
```
  
[^](#table-of-contents)

-------------------------------------------
#### 3. >>> ht['betty'] = 'cool'

Write a function that <mark>adds an element to the hash table</mark>.

Prototype:
```
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
```

- Where ```ht``` is the hash table you want to add or update the key/value to
- ```key``` is the key. ```key``` can not be an empty string
- and ```value``` is the ```value``` associated with the key. ```value``` must be duplicated. value can be an empty string
- Returns: ```1``` if it succeeded, ```0``` otherwise
- In case of collision, add the new node at the beginning of the list
  
  
If you want to test for collisions, here are some strings that collide using the djb2 algorithm:
  
- <b>hetairas</b> collides with <b>mentioner</b>
- <b>heliotropes</b> collides with <b>neurospora</b>
- <b>depravement</b> collides with <b>serafins</b>
- <b>stylist</b> collides with <b>subgenera</b>
- <b>joyful</b> collides with <b>synaphea</b>
- <b>redescribed</b> collides with <b>urites</b>
- <b>dram</b> collides with <b>vivency</b>

desired output:  
```
~/Hash tables$
```
  
[^](#table-of-contents)

-------------------------------------------
#### 4. >>> ht['betty']

Write a function that <mark>retrieves a value associated with a key</mark>.

Prototype:
```  
char *hash_table_get(const hash_table_t *ht, const char *key);
```
  
- where ```ht``` is the hash table you want to look into
- and ```key``` is the key you are looking for
- Returns the value associated with the element, or ```NULL``` if ```key``` couldn't be found

desired output:  
```
python:awesome
Bob:and Kris love asm
N:queens
Asterix:Obelix
Betty:Cool
98:Battery Street
c:isfun
javascript:(null)
```
  
[^](#table-of-contents)

-------------------------------------------
#### 5. >>> print(ht)

Write a function that <mark>prints a hash table</mark>.
  
Prototype:  
```
void hash_table_print(const hash_table_t *ht);
```
  
- where ```ht``` is the hash table
- You should print the key/value in the order that they appear in the array of hash table
- Order: array, list
- Format: see example
- If ```ht``` is NULL, don't print anything
  
desired output:  
```
{}
{'Betty': 'Cool', 'python': 'awesome', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Bob': 'and Kris love asm', 'Asterix': 'Obelix'}
```
  
[^](#table-of-contents)

-------------------------------------------
#### 6. >>> del ht

Write a function that <mark>deletes a hash table</mark>.

Prototype:  
```
void hash_table_delete(hash_table_t *ht);
```
  
- where ```ht``` is the hash table

desired output:  
```
==6621== Memcheck, a memory error detector
==6621== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==6621== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==6621== Command: ./g
==6621== 
{'Betty': 'Cool', 'mentioner': 'Bob', 'hetairas': 'Bob Z Chu', 'python': 'awesome', 'Bob': 'and Kris love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Tim': 'Britton', 'Asterix': 'Obelix'}
==6621== 
==6621== HEAP SUMMARY:
==6621==     in use at exit: 0 bytes in 0 blocks
==6621==   total heap usage: 37 allocs, 37 frees, 8,646 bytes allocated
==6621== 
==6621== All heap blocks were freed -- no leaks are possible
==6621== 
==6621== For counts of detected and suppressed errors, rerun with: -v
==6621== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
  
[^](#table-of-contents)

-------------------------------------------
#### Requirements
  
- Allowed editors: vi, vim, emacs
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, printf and exit
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. - - Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called lists.h
- Don't forget to push your header file
- All your header files should be include guarded
  
[^](#table-of-contents)
