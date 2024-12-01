# Array to AVL 🌳  

Hi there! 👋 Welcome to my implementation of the **Array to AVL** project, part of the **Holberton School Interview Preparation curriculum**. This project is all about transforming a sorted array into an AVL tree (a self-balancing binary search tree) using C.  

## Project Overview  
In this project, I:  
- Work with binary trees, focusing on AVL trees.  
- Implement a function that builds an AVL tree from a sorted array.  
- Follow **Betty style guidelines** to ensure clean and consistent code.  

### The Challenge  
The task involves converting a **sorted array** into a valid **AVL tree**. An AVL tree keeps its height balanced, ensuring optimal search performance (O(log n)).  

### Why It Matters  
Understanding and implementing AVL trees:  
- Deepens knowledge of binary search trees.  
- Demonstrates the importance of balancing in data structures.  
- Prepares me for technical interviews, where tree-based problems are common!  

---

## Requirements 🛠️  
Here are the technical specs for this project:  
- **Language**: C  
- **Compilation**:  
  - Ubuntu 14.04 LTS  
  - `gcc 4.8.4` with flags: `-Wall -Werror -Wextra -pedantic`  
- **Coding style**: Betty  
- **File organization**:  
  - Header file: `binary_trees.h` (include guarded)  
  - Maximum 5 functions per file  
  - No global variables  

## Data Structures  
The project relies on the following structures:  

### Basic Binary Tree Structure  
```c  
struct binary_tree_s  
{  
    int n;  
    struct binary_tree_s *parent;  
    struct binary_tree_s *left;  
    struct binary_tree_s *right;  
};  

typedef struct binary_tree_s binary_tree_t;  
```

## Author
Saafi Nacim
Holberton School Student