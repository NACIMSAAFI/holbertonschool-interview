# Radix Sort Algorithm Project

This project focuses on implementing the **Radix Sort** algorithm in C. The goal is to sort an array of non-negative integers in ascending order using the **Least Significant Digit (LSD) Radix Sort** algorithm. The project includes specific requirements and constraints to ensure the code is efficient, clean, and adheres to best practices.

---

## Project Structure

- **`0-radix_sort.c`**: Contains the implementation of the Radix Sort algorithm.
- **`print_array.c`**: Provided helper function to print the array.
- **`sort.h`**: Header file containing function prototypes and include guards.
- **`0-main.c`**: Example main file to test the Radix Sort function (not required to be pushed to the repository).

---

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on **Ubuntu 14.04 LTS**
- Programs and functions will be compiled with `gcc 4.8.4` using the flags:
  - `-Wall`
  - `-Werror`
  - `-Wextra`
  - `-pedantic`
- All files must end with a new line.
- A `README.md` file at the root of the project folder is mandatory.
- Code must follow the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`.
- No global variables are allowed.
- No more than 5 functions per file.
- Standard library functions like `printf`, `puts`, etc., are **not allowed** unless specified otherwise.
- Prototypes of all functions must be included in the `sort.h` header file.
- Header files must be include-guarded.
- If the size of the array is less than 2, it does not need to be sorted.

### Radix Sort Function
- **Prototype**: `void radix_sort(int *array, size_t size);`
- Implement the **LSD Radix Sort** algorithm.
- Assume the array contains only non-negative integers.
- Use `malloc` and `free` for dynamic memory allocation.
- Print the array each time the significant digit is increased.

---

## Example

### Input
```c
int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
size_t n = sizeof(array) / sizeof(array[0]);
