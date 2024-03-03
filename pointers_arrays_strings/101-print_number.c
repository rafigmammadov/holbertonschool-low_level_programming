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
	unsigned int absolute, divisor, poweroften;

	if (n < 0)
	{
		_putchar('-');
		absolute = -n;
	}
	else
	{
		absolute = n;
	}

	divisor = absolute;
	poweroften = 1;

	while (divisor > 9)
	{
		divisor /= 10;
		poweroften *= 10;
	}

	for (; poweroften >= 1; poweroften /= 10)
	{
		_putchar(((absolute / poweroften) % 10) + '0');
	}
}
