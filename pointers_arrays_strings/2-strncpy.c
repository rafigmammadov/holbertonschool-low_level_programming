#include "main.h"

/**
 * _strncpy - Function that copies a string
 *
 * @dest: The parameter that represents destionation string
 * @src: The parameter that represents source string
 * @n: The parameter that represents bits count
 *
 * Return: Returns destination string
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
