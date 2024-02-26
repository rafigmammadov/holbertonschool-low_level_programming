#include "main.h"

/**
 * print_line - Function that draws
 * a straight line in the terminal.
 *
 * @n: The parameter that represents count of the underscore characters
 *
 * Return: Returns no value
 *
 *
 */

void print_line(int n)
{
	int i = 0;
	int a = n;

	while (i < a)
	{
		if (a <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
