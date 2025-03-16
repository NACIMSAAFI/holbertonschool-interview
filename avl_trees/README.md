# AVL Trees - Binary Tree Validation

This project focuses on implementing a function to check if a binary tree is a valid AVL (Adelson-Velsky and Landis) tree. AVL trees are self-balancing binary search trees where the difference between the heights of the left and right subtrees of any node is no more than one.

---

## Table of Contents
1. [Description](#description)
2. [Requirements](#requirements)
3. [Data Structures](#data-structures)
4. [Tasks](#tasks)
5. [Example Usage](#example-usage)
6. [Author](#author)

---

## Description

The goal of this project is to write a function `binary_tree_is_avl` that checks if a given binary tree is a valid AVL tree. The function must adhere to the properties of AVL trees:
1. The tree must be a binary search tree (BST).
2. The difference between the heights of the left and right subtrees of any node must not exceed one.
3. Both the left and right subtrees must also be valid AVL trees.

---

## Requirements

### General
- **Allowed editors**: `vi`, `vim`, `emacs`
- **Compilation**: Files will be compiled on **Ubuntu 14.04 LTS** using `gcc 4.8.4` with the flags `-Wall -Werror -Wextra -pedantic`.
- **Code Style**: Code must follow the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`.
- **File Format**:
  - All files must end with a new line.
  - A `README.md` file at the root of the project folder is mandatory.
- **Global Variables**: Not allowed.
- **Functions**: No more than 5 functions per file.
- **Standard Library**: Allowed.
- **Header File**: All function prototypes must be included in a header file named `binary_trees.h`.
- **Include Guards**: All header files must be include-guarded.

---
