# Heap Extract

Welcome to the **Heap Extract** project! 🚀 This is part of the **[C#22] Interview Preparation - Algorithms** curriculum at Holberton School, focusing on data structures and algorithmic problem-solving. In this project, I implemented functions to extract the root node from a **max binary heap** using C.

## Table of Contents

- [Description](#description)
- [Requirements](#requirements)
- [Data Structures](#data-structures)
- [Usage](#usage)
- [Author](#author)

## Description

The goal of this project is to:
- Implement functions to extract the root node of a max binary heap.
- Work with binary trees and ensure the heap property is maintained after extraction.

This project adheres to strict coding standards, ensuring proper style and documentation.

## Requirements

- **Editors:** `vi`, `vim`, `emacs`
- **OS:** Ubuntu 14.04 LTS
- **Compiler:** `gcc 4.8.4` with `-Wall -Werror -Wextra -pedantic` flags
- **Coding style:** Betty style
- **Global variables:** Not allowed
- **Functions per file:** Maximum of 5
- **Standard library:** Allowed

All files include:
- A mandatory `README.md`.
- Header file `binary_trees.h` with all necessary function prototypes and data structure definitions.

## Data Structures

The project uses the following structure for a binary tree node:

```c
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

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s heap_t;
