#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

void merge_sort(int *array, size_t size);
void merge_sort_helper(int *array, int *temp, size_t start, size_t end);
void merge(int *array, int *temp, size_t start, size_t mid, size_t end);

/**
 * merge_sort - Sorts an array of integers in ascending order using Merge sort
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void merge_sort(int *array, size_t size)
{
	int *temp;

	if (array == NULL || size < 2)
		return;

	temp = malloc(sizeof(int) * size);
	if (temp == NULL)
		return;

	merge_sort_helper(array, temp, 0, size);

	free(temp);
}

/**
 * merge_sort_helper - Recursively sorts subarrays and merges them
 * @array: The array to sort
 * @temp: Temporary array for merging
 * @start: Start index of the subarray
 * @end: End index of the subarray (exclusive)
 */
void merge_sort_helper(int *array, int *temp, size_t start, size_t end)
{
	size_t mid;

	if (end - start <= 1)
		return;

	mid = start + (end - start) / 2;
	merge_sort_helper(array, temp, start, mid);
	merge_sort_helper(array, temp, mid, end);
	merge(array, temp, start, mid, end);
}

/**
 * merge - Merges two sorted subarrays into one sorted array
 * @array: The array containing the subarrays to merge
 * @temp: Temporary array used for merging
 * @start: Start index of the first subarray
 * @mid: End index of the first subarray and start of the second
 * @end: End index of the second subarray
 */
void merge(int *array, int *temp, size_t start, size_t mid, size_t end)
{
	size_t i, j, k;

	printf("Merging...\n[left]: ");
	print_array(array + start, mid - start);
	printf("[right]: ");
	print_array(array + mid, end - mid);

	for (i = start; i < end; i++)
		temp[i] = array[i];

	i = start;
	j = mid;
	k = start;

	while (i < mid && j < end)
	{
		if (temp[i] <= temp[j])
			array[k++] = temp[i++];
		else
			array[k++] = temp[j++];
	}

	while (i < mid)
		array[k++] = temp[i++];

	while (j < end)
		array[k++] = temp[j++];

	printf("[Done]: ");
	print_array(array + start, end - start);
}
