#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function that prints all natural numbers
 * from n to 98, followed by a new line.
 *
 * @n: The parameter tha will be computed
 *
 *
 * Return: Returns no result
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}

	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
