#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 *
 * @s1: The parameter that represents the first string
 * @s2: The parameter that represents the second string
 *
 * Return: Returns the difference between them
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (int)(*s1) - (int)(*s2);
}
