# Merge Sort Implementation in C

This project implements the Merge Sort algorithm to sort an array of integers in ascending order using a top-down approach.

## Description

The Merge Sort algorithm follows the **divide-and-conquer** paradigm:
1. **Divide** the unsorted array into subarrays
2. **Conquer** by recursively sorting subarrays
3. **Combine** (merge) sorted subarrays to produce final sorted array

Key features:
* Left subarray always has size ≤ right subarray when splitting
* Prints merging steps with `[left]` and `[right]` subarrays
* Uses temporary array for merging (allocated once)
* Complies with strict C90 standards

## Requirements
* Ubuntu 14.04 LTS
* gcc 4.8.4
* No standard library functions except `printf`, `malloc`, and `free`

## Approach
### Divide Phase
1. Split array at midpoint `mid = start + (end - start) / 2`
2. Ensure left size ≤ right size
3. Recursively sort left and right subarrays

### Merge Phase
1. Use temporary array for merging
2. Compare elements from left/right subarrays
3. Build sorted array from smallest elements
4. Print merging process:
   ```c
   printf("Merging...\n[left]: ");
   print_array(...);
   printf("[right]: ");
   print_array(...);