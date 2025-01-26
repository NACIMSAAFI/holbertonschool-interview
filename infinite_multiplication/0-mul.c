#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "holberton.h"

/**
 * is_number - Check if a string is a valid number
 * @str: The string to check
 *
 * Return: 1 if valid number, 0 if not
 */
int is_number(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Multiply two positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if successful, 98 if error occurs
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	long num1 = atol(argv[1]);
	long num2 = atol(argv[2]);

	printf("%ld\n", num1 * num2);

	return (0);
}
