# Rotate 2D Matrix

## Project Overview

The task is to rotate a given **n x n** 2D matrix by **90 degrees clockwise** in-place. This means that the matrix is modified directly without using additional space for another matrix.

## Requirements

- **Language**: Python 3.x
- **Style Guide**: PEP 8 (version 1.7.x)
- **Constraints**:
  - You are not allowed to import any external modules.
  - The matrix will always have two dimensions and will not be empty.
  - The matrix must be rotated in place, i.e., the modification should happen directly on the input matrix.
  
## Task

Given a square matrix, the program rotates the matrix by 90 degrees clockwise without returning anything. The matrix is modified in-place.

### Prototype:

def rotate_2d_matrix(matrix):
Input:
A 2D list (matrix) with n x n dimensions.
Output:
None. The matrix is updated in place.

### Example:
Input:
```bash
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
rotate_2d_matrix(matrix)
```

Output:
```bash
[
    [7, 4, 1],
    [8, 5, 2],
    [9, 6, 3]
]
```

## How It Works
Transpose the matrix: Swap elements such that matrix[i][j] is swapped with matrix[j][i].
Reverse each row: After transposing, reverse the elements in each row to complete the 90-degree clockwise rotation.
Example Usage
To run the program, simply call the rotate_2d_matrix function with a 2D matrix:


```bash
$ python3 0-rotate_2d_matrix.py
```
This will rotate the matrix in place and output the rotated matrix.

## Author
[Nacim Saafi]


### How to Use This File:
- **Installation**: This project doesn't require installation. Simply clone the repository and run the Python file.
- **Running the Code**: The example usage in the README shows how to run the Python program to rotate a 2D matrix.
