#include "slide_line.h"

/**
 * reverse - Reverses the array
 * @line: Pointer to the array
 * @size: Size of the array
 * Return: Nothing
 */
void reverse(int *line, size_t size)
{
	size_t a = 0, b = size - 1;

	while (a < b)
	{
		int temp = line[a];

		line[a] = line[b];
		line[b] = temp;
		a++;
		b--;
	}
}

/**
 * slide_zero - Moves zeros to the end
 * @line: Pointer to the array
 * @size: Size of the array
 * Return: Nothing
 */
void slide_zero(int *line, size_t size)
{
	size_t i, zero = 0;

	for (i = 0; i < size; i++)
	{
		if (line[i] != 0)
		{
			if (zero)
				line[i - zero] = line[i];
		}
		else
		{
			zero++;
		}
	}

	while (zero--)
		line[size - zero - 1] = 0;
}

/**
 * merge_line - Merges identical elements
 * @line: Pointer to the array
 * @size: Size of the array
 * Return: Nothing
 */
void merge_line(int *line, size_t size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
	{
		if (line[i] == line[i + 1] && line[i] != 0)
		{
			line[i] *= 2;
			line[i + 1] = 0;
		}
	}
}

/**
 * slide_line - Slides and merges an array of integers
 * @line: Pointer to an array of integers
 * @size: Number of elements in the array
 * @direction: Direction to slide (SLIDE_LEFT or SLIDE_RIGHT)
 * Return: 1 upon success, or 0 upon failure
 */
int slide_line(int *line, size_t size, int direction)
{
	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
		return (0);

	if (direction == SLIDE_RIGHT)
		reverse(line, size);

	slide_zero(line, size);
	merge_line(line, size);
	slide_zero(line, size);

	if (direction == SLIDE_RIGHT)
		reverse(line, size);

	return (1);
}
