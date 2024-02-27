#include "main.h"
#include <unistd.h>

/**
 * _puts - Function that prints a string, followed
 * by a new line, to stdout.
 *
 * @s: The parameter that represents string
 *
 * Return: Returns no value
 *
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
