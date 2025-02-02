# Find the Loop in a Linked List

This project implements a function to detect and find the starting node of a loop in a singly linked list. The solution uses **Floyd's Cycle Detection Algorithm** (also known as the "Tortoise and Hare" algorithm) to achieve this efficiently.

---

## Table of Contents
1. [Project Description](#project-description)
2. [Requirements](#requirements)
3. [Implementation](#implementation)
4. [Algorithm Explanation](#algorithm-explanation)
5. [Compilation and Usage](#compilation-and-usage)
6. [Example](#example)
7. [Constraints](#constraints)
8. [Files](#files)

---

## Project Description
The goal of this project is to write a function `find_listint_loop` that detects whether a loop exists in a linked list and returns the address of the node where the loop starts. If no loop is found, the function returns `NULL`.

---

## Requirements
- **Allowed editors**: `vi`, `vim`, `emacs`
- **Compilation**: On Ubuntu 14.04 LTS with `gcc 4.8.4` using flags `-Wall -Werror -Wextra -pedantic`
- **Code Style**: Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
- **Global Variables**: Not allowed
- **Functions**: No more than 5 functions per file
- **Standard Library Functions**: Not allowed (e.g., `printf`, `malloc`, `free`, etc.)
- **Header File**: Use the provided `lists.h` file
- **Include Guards**: Required for all header files

---

## Implementation
The function `find_listint_loop` is implemented in the file `0-find_loop.c`. It uses two pointers (`slow` and `fast`) to traverse the linked list:
- `slow` moves one step at a time.
- `fast` moves two steps at a time.

If `slow` and `fast` meet, a loop is detected. The function then resets one pointer to the head and moves both pointers one step at a time until they meet again, which is the start of the loop.

---

## Algorithm Explanation
1. **Detect the Loop**:
   - Use two pointers, `slow` and `fast`.
   - Move `slow` one step and `fast` two steps at a time.
   - If they meet, a loop exists.

2. **Find the Start of the Loop**:
   - Reset `slow` to the head of the list.
   - Move both `slow` and `fast` one step at a time.
   - The node where they meet is the start of the loop.

---

## Compilation and Usage
To compile the program, use the following command:
```bash
gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-find_loop.c -L. -lloop -o main
```

Alternatively, if you are using the lib.c file instead of the static library:

bash
```
gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-find_loop.c lib.c -o main
```
Run the program:

bash
```
./main
```
## Example
Given the following linked list with a loop:

bash
```
1 -> 2 -> 3 -> 4 -> 5
     ^              |
     |______________|
```
The function will detect the loop and return the node with value 2 as the start of the loop.

## Constraints
Only two variables can be declared in the function.

No dynamic memory allocation or standard library functions are allowed.

The function must adhere to the Betty coding style.

## Files
0-find_loop.c: Contains the implementation of the find_listint_loop function.

lists.h: Header file containing the structure definition and function prototypes.

0-main.c: Example main file to test the function.

README.md: This file, providing an overview of the project.

## Author
[SAAF NACIM]
