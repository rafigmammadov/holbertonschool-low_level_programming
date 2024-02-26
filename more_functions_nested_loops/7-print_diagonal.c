#include "main.h"

/**
 * print_diagonal - Function that draws
 * a diagonal line on the terminal.
 *
 * @n: The parameter that counts diagonals
 *
 * Return: Returns no value
 *
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;
	int a = n;

	if (a > 0)
	{

		while (i < a)
		{

			j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}

			i++;

			_putchar('\\');
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
