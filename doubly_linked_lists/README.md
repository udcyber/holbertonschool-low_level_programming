# C - Doubly linked lists
-------------------------------------------
#### Table of contents  
- [0. Print list](#0-print-list)
- [1. List length](#1-list-length)
- [2. Add node](#2-add-node)
- [3. Add node at the end](#3-add-node-at-the-end)
- [4. Free list](#4-free-list)
- [5. Get node at index](#5-get-node-at-index)
- [6. Sum list](#6-sum-list)
- [7. Insert at index](#7-insert-at-index)
- [8. Delete at index](#8-delete-at-index)
- [Requirements](#requirements)

-------------------------------------------
#### 0. Print list
  
Write a function that prints all the elements of a ```dlistint_t``` list.

Prototype:  
```
size_t print_dlistint(const dlistint_t *h);
```
  
- Return: the number of nodes
- Format: see example

desired output:  
```
9
8
-> 2 elements
```
  
[^](#table-of-contents)

-------------------------------------------
#### 1. List length

Write a function that returns the number of elements in a linked dlistint_t list.

Prototype:  
```
size_t dlistint_len(const dlistint_t *h);
```

desired output:  
```
-> 2 elements
```

[^](#table-of-contents)

-------------------------------------------
#### 2. Add node

Write a function that adds a new node at the beginning of a dlistint_t list.

Prototype:  
```
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
```
  
- Return: the address of the new element, or NULL if it failed

desired output:  
```
1024
402
98
4
3
2
1
0
```
  
[^](#table-of-contents)
  
-------------------------------------------
#### 3. Add node at the end

Write a function that adds a new node at the end of a dlistint_t list.

Prototype:  
```
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
```

- Return: the address of the new element, or NULL if it failed
  
desired output:  
```
0
1
2
3
4
98
402
1024
```
  
[^](#table-of-contents)
  
-------------------------------------------
#### 4. Free list

Write a function that frees a ```dlistint_t``` list.

Prototype:  
```
void free_dlistint(dlistint_t *head);
```
  
desired output:  
```
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
  
[^](#table-of-contents)
  
-------------------------------------------
#### 5. Get node at index

Write a function that returns the nth node of a ```dlistint_t linked``` list.

Prototype:  
```
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
```
  
- where ```index``` is the index of the node, starting from ```0```
- if the node does not exist, return ```NULL```

desired output:  
```
0
1
2
3
4
98
402
1024
98
```
  
[^](#table-of-contents)
  
-------------------------------------------
#### 6. Sum list

Write a function that returns the sum of all the data (n) of a ```dlistint_t``` linked list.

Prototype:  
```
int sum_dlistint(dlistint_t *head);
```

if the list is empty, return ```0```

desired output:  
```
sum = 1534
```
  
[^](#table-of-contents)
  
-------------------------------------------
#### 7. Insert at index

Write a function that inserts a new node at a given position.

Prototype:  
```
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
```
  
- where ```idx``` is the index of the list where the new node should be added. Index starts at ```0```
- Returns: the address of the new node, or ```NULL``` if it failed
- if it is not possible to add the new node at index ```idx```, do not add the new node and return ```NULL```

Your files ```2-add_dnodeint.c``` and ```3-add_dnodeint_end.c``` will be compiled during the correction

desired output:  
```
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
```
  
[^](#table-of-contents)
  
-------------------------------------------
#### 8. Delete at index

Write a function that deletes the node at index ```index``` of a ```dlistint_t``` linked list.

- Prototype:  
```
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
```
  
- where ```index``` is the index of the node that should be deleted. Index starts at 0
- Returns: ```1``` if it succeeded, ```-1``` if it failed
  
desired output:  
```
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
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
