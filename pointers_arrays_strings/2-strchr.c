#include "main.h"

/**
 * _strchr - Function that locates a character in a string.
 *
 * @s: The parameter that represents string
 * @c: The parameter that represents the character
 *
 * Return: Returns a pointer to the first occurence of the character
 *
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + 1);
		}
	}

	if (*(s + i) == c)
	{
		return (s + i);
	}

	return ('\0');
}

