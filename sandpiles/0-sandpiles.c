#include "sandpiles.h"
#include <stdio.h>

/**
 * print_grid - Prints a 3x3 grid.
 * @grid: The grid to print.
 */
static void print_grid(int grid[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * is_stable - Checks if the grid is stable.
 * @grid: The grid to check.
 *
 * Return: 1 if stable, 0 otherwise.
 */
static int is_stable(int grid[3][3])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (grid[i][j] > 3)
				return (0);
	return (1);
}

/**
 * toppling - Topples the grid when unstable.
 * @grid: The grid to topple.
 */
static void toppling(int grid[3][3])
{
	int temp[3][3];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			temp[i][j] = grid[i][j];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (temp[i][j] > 3)
			{
				grid[i][j] -= 4;
				if (i > 0)
					grid[i - 1][j] += 1;
				if (i < 2)
					grid[i + 1][j] += 1;
				if (j > 0)
					grid[i][j - 1] += 1;
				if (j < 2)
					grid[i][j + 1] += 1;
			}
		}
	}
}

/**
 * sandpiles_sum - Computes the sum of two sandpiles.
 * @grid1: The first sandpile grid.
 * @grid2: The second sandpile grid.
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			grid1[i][j] += grid2[i][j];

	while (!is_stable(grid1))
	{
		printf("=\n");
		print_grid(grid1);
		toppling(grid1);
	}
}
