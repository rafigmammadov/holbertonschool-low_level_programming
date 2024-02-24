#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of
 * a number.
 *
 * @integer: The integer that will be computed
 *
 * Return: Returns the last digit
 *
 */

int print_last_digit(int integer)
{
	int last_digit = integer % 10;

	if (integer < 0)
	{
		last_digit *= -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
