#include "main.h"
#include <unistd.h>

/**
 * print_rev - Function that prints
 * a string, in reverse, followed by a new line.
 *
 * @s: The parameter that represents string
 *
 * Return: Returns no value
 *
 */

void print_rev(char *s)
{
	int len = 0;
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		len += 1;
		i += 1;
	}
	for (j = len; j >= 0; j--)
	{
		write(1, &s[j], 1);
	}

	write(1, "\n", 1);
}
