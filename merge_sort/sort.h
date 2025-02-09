#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Function to print an array of integers */
void print_array(const int *array, size_t size);

/* Merge Sort function */
void merge_sort(int *array, size_t size);

/* Helper functions for Merge Sort */
void merge_sort_helper(int *array, int *temp, size_t start, size_t end);
void merge(int *array, int *temp, size_t start, size_t mid, size_t end);

#endif /* SORT_H */
