#include "main.h"

/**
 * print_triangle - Function that prints
 * a triangle, followed by a new line.
 *
 * @size: The parameter that will be size of square
 *
 * Return: Returns no value
 *
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}

			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}

			if (i == size)
			{
				continue;
			}

			_putchar('\n');
		}
	}

	_putchar('\n');
}

