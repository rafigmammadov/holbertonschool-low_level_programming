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
	int i;
	int len;
	int n;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	for (n = ((len - 1) / 2) + 1; n <= len - 1; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
