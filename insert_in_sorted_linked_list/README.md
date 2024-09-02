# Insert in Sorted Linked List

## Overview

This project is a technical interview preparation task focused on algorithms. The goal is to write a function in C that inserts a number into a sorted singly linked list. 

- **Difficulty**: Novice
- **Project Badge**: [Link to Badge]
- **Author**: Carrie Ybay, Software Engineer at Holberton School

## Project Details

### Requirements

- **Allowed Editors**: `vi`, `vim`, `emacs`
- **Compilation**: Ubuntu 14.04 LTS
- **Compiler**: `gcc 4.8.4`
- **Flags**: `-Wall -Werror -Wextra -pedantic`
- **Code Style**: Betty style (checked with `betty-style.pl` and `betty-doc.pl`)
- **Global Variables**: Not allowed
- **Functions per File**: No more than 5
- **Header File**: All function prototypes should be included in `lists.h`
- **Include Guards**: All header files should be include guarded

### Tasks

#### 0. Insert in Sorted Linked List

**Mandatory**

Write a function in C that inserts a number into a sorted singly linked list.

- **Prototype**: `listint_t *insert_node(listint_t **head, int number);`
- **Return**: Address of the new node, or `NULL` if it failed

### File Descriptions

- **`lists.h`**: Header file containing the structure definition and function prototypes.

    ```c
    #ifndef LISTS_H
    #define LISTS_H

    #include <stddef.h>

    /**
     * struct listint_s - singly linked list
     * @n: integer
     * @next: points to the next node
     *
     * Description: singly linked list node structure
     * for Holberton project
     */
    typedef struct listint_s
    {
        int n;
        struct listint_s *next;
    } listint_t;

    size_t print_listint(const listint_t *h);
    listint_t *add_nodeint_end(listint_t **head, const int n);
    void free_listint(listint_t *head);
    listint_t *insert_node(listint_t **head, int number);

    #endif /* LISTS_H */
    ```

- **`linked_lists.c`**: Contains functions for manipulating linked lists (`print_listint`, `add_nodeint_end`, `free_listint`).

- **`0-main.c`**: Example test file to check the functionality of the implemented functions.

- **`0-insert_number.c`**: Implementation file for the `insert_node` function.

### Example Usage

Compile the code using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic 0-main.c linked_lists.c 0-insert_number.c -o insert
