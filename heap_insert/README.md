# Heap Insert

**Author**: Alexa Orrico, Software Engineer at Holberton School  


## Overview

The `Heap Insert` project focuses on implementing and manipulating binary heaps. This project helps in understanding binary tree operations, particularly insertion into a binary heap.

## Requirements

### General

- **Allowed Editors**: `vi`, `vim`, `emacs`
- **Compilation Environment**: Ubuntu 14.04 LTS
- **Compiler**: `gcc 4.8.4` with the following flags:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic

### File Conventions:

- All files should end with a new line.
- A README.md file is mandatory and should be located at the root of the project folder.
- Code must adhere to the Betty style. It will be checked using - betty-style.pl and betty-doc.pl.
- Global variables are not allowed.
- No more than 5 functions per file.
- The standard library is allowed.
- * Header Files:
- Function prototypes should be included in a header file named - binary_trees.h.
- Ensure that header files are include guarded.
- * Example Files
-Main Files: Provided main.c files are for testing purposes only. -They are not required to be pushed to your repository and may differ from the grading version.
- **Data Structures**
Use the following data structures and types for binary trees. Include them in your header file:

- **Basic Binary Tree**

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

### Max Binary Heap

typedef struct binary_tree_s heap_t;

### Print Function

A print function is provided solely for visualization. It is not required to be included in your repository and will not be used during the grading process.
