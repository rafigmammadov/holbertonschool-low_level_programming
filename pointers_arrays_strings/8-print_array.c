#include "main.h"
#include <stdio.h>
#include "_putchar.c"

/**
 * print_array - Function that prints n elements
 * of an array of integers, followed by a new line.
 *
 * @a: The parameter that represents an array of integers
 * @n: The parameter that represents the n elements to be printed
 *
 * Return: Returns no value
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("%c", '\n');
}
