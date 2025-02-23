# Double Circular Linked List

This project implements a **double circular linked list** in C. The list is circular, meaning the last node points back to the first node, and it is doubly linked, meaning each node has pointers to both the previous and next nodes.

## Project Structure

- **`0-add_node.c`**: Contains the implementation of functions to add nodes to the beginning and end of the list.
- **`list.h`**: Header file containing the structure definition and function prototypes.
- **`0-main.c`**: Example main file to test the functionality of the linked list.

## Functions Implemented

### `List *add_node_end(List **list, char *str)`
- **Description**: Adds a new node to the **end** of the double circular linked list.
- **Parameters**:
  - `list`: A pointer to the head of the list.
  - `str`: The string to be stored in the new node.
- **Returns**: A pointer to the new node, or `NULL` on failure.

### `List *add_node_begin(List **list, char *str)`
- **Description**: Adds a new node to the **beginning** of the double circular linked list.
- **Parameters**:
  - `list`: A pointer to the head of the list.
  - `str`: The string to be stored in the new node.
- **Returns**: A pointer to the new node, or `NULL` on failure.

## Data Structure

The linked list is implemented using the following structure:

```c
typedef struct List
{
    char *str;              // String stored in the node
    struct List *prev;      // Pointer to the previous node
    struct List *next;      // Pointer to the next node
} List;