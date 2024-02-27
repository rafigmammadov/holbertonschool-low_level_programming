#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 *
 * @s: The parameter that represents string
 *
 * Return: Returns the length of a string
 *
 */

int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len += 1;
		i += 1;
	}

	return (len);
}
