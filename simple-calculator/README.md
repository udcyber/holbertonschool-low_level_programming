# C - Simple Calculator

---

Your code must compile successfully with the required compiler flags and produce no warnings.
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

---

Rules and Constraints (Read Carefully)

- You must not copy code from other students, repositories, or tutorials.
- You must not use AI tools to generate or modify code.
- Only standard C libraries are allowed. (e.g., stdio.h, stdlib.h, string.h, ctype.h)
- Not allowed: math.h or any external libraries
- The program must compile using strict compiler flags with zero warnings.
- All user input must be read using scanf.
You are expected to read integer menu options and numeric operands.
- Arithmetic operations must be implemented using basic operators (+, -, *, /).

---

## 0. Setup + Skeleton Program

Objective

Ensure the program compiles and runs.

Requirements

- Print a welcome line.
- Display a menu.
- Allow quitting with option 0.

Expected Outcome (example)
```
Simple Calculator
1) Add
2) Subtract
3) Multiply
4) Divide
0) Quit
Choice: 0
Bye!
```
Repo:

GitHub repository: holbertonschool-low_level_programming  
Directory: simple-calculator  
File: calculator.c  

---

## 1. Menu Loop + Choice Validation

Objective

Repeat the menu until quit and reject invalid choices.

Requirements

- The menu must loop.
- If the user enters a number not in the menu, print:
```
  Invalid choice
```
- On quitting, print:
```
  Bye!
```
Expected Outcome
```
Choice: 9
Invalid choice
Choice: 0
Bye!
```
Repo:

GitHub repository: holbertonschool-low_level_programming  
Directory: simple-calculator  
File: calculator.c  

---

## 2. Addition

Objective

Implement addition end-to-end.

Requirements

- On choice 1:

- Prompt for A: and B:

- Compute A + B

- Print:
```
Result: <value>
```
Expected Outcome
```
Choice: 1
A: 10
B: 25
Result: 35
```
Repo:

GitHub repository: holbertonschool-low_level_programming  
Directory: simple-calculator  
File: calculator.c  

---

## 3. Subtraction

Objective

Implement subtraction.

Requirements

- On choice 2, compute A - B and print the result.

Expected Outcome
```
Choice: 2
A: 10
B: 25
Result: -15
```
Repo:

GitHub repository: holbertonschool-low_level_programming  
Directory: simple-calculator  
File: calculator.c  

---

## 4. Multiplication

Objective

Implement multiplication.

Requirements
- On choice 3, compute A * B.
Expected Outcome
```
Choice: 3
A: 7
B: 6
Result: 42
```
Repo:

GitHub repository: holbertonschool-low_level_programming  
Directory: simple-calculator  
File: calculator.c  

---

## 5. Division

Objective

Implement division safely.

Requirements

- On choice 4:

- If B == 0, print exactly:

```
Error: division by zero
```
- Otherwise print the division result.

Expected Outcome

Division by zero:
```
Choice: 4
A: 10
B: 0
Error: division by zero
```
Normal division (example):
```
Choice: 4
A: 10
B: 4
Result: 2.5
```
You must decide whether the calculator uses integers or decimals. The behavior must be consistent and documented.

Repo:

GitHub repository: holbertonschool-low_level_programming  
Directory: simple-calculator  
File: calculator.c  
