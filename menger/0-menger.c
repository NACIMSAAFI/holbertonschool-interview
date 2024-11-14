#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "menger.h"

/**
 * menger - Draws a 2D Menger Sponge of a given level.
 * @level: The level of the Menger Sponge (0 or higher).
 * Return: void
 */
void menger(int level)
{
	if (level < 0)
		return;

	int size = pow(3, level);
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			int x = i, y = j;
			char c = '#';

			while (x > 0 || y > 0)
			{
				if (x % 3 == 1 && y % 3 == 1)
				{
					c = ' ';
					break;
				}
				x /= 3;
				y /= 3;
			}

			printf("%c", c);
		}
		printf("\n");
	}
}
