#include "main.h"

/**
 * print_number - Function that prints an integer
 *
 * @n: The parameter that represents string
 *
 * Return: Returns no value
 *
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}

