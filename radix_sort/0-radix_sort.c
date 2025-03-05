#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_max - Gets the maximum value in an array of integers.
* @array: The array of integers.
* @size: The size of the array.
*
* Return: The maximum integer in the array.
*/
int get_max(int *array, size_t size)
{
int max = array[0];
size_t i;

for (i = 1; i < size; i++)
{
if (array[i] > max)
max = array[i];
}
return (max);
}

/**
* counting_sort - Sorts an array of integers using Counting Sort
*                 based on the significant digit represented by exp.
* @array: The array to be sorted.
* @size: The size of the array.
* @exp: The current significant digit to sort by.
*/
void counting_sort(int *array, size_t size, int exp)
{
int *output = malloc(sizeof(int) * size);
int count[10] = {0};
size_t i;

if (!output)
return;

/* Store count of occurrences in count[] */
for (i = 0; i < size; i++)
count[(array[i] / exp) % 10]++;

/* Change count[i] so count[i] contains actual position */
for (i = 1; i < 10; i++)
count[i] += count[i - 1];

/* Build the output array (must loop backwards to be stable sort) */
for (int j = (int)(size - 1); j >= 0; j--)
{
output[count[(array[j] / exp) % 10] - 1] = array[j];
count[(array[j] / exp) % 10]--;
}

/* Copy output array back to original array */
for (i = 0; i < size; i++)
array[i] = output[i];

print_array(array, size); /* Assuming print_array is defined elsewhere */

free(output);
}


/**
* radix_sort - Sorts an array of integers in ascending order
*              using the Radix Sort algorithm (LSD implementation).
* @array: The array to be sorted.
* @size: The size of the array.
*/
void radix_sort(int *array, size_t size)
{
int max, exp;

if (!array || size < 2)
return;

max = get_max(array, size);

for (exp = 1; max / exp > 0; exp *= 10)
counting_sort(array, size, exp);
}
