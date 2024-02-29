#include "main.h"

/**
 * puts_half - Function that prints half of
 * a string, followed by a new line.
 *
 * @str: The parameter that represents string
 *
 * Return: Returns no value
 *
 */

void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len += 1;
	}

	for (n = ((len - 1) / 2) + 1; n <= len - 1; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
