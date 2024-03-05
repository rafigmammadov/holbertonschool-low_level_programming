#include "main.h"

/**
 * _memcpy - Function that copies memory area
 *
 * @dest: The parameter that represents destination
 * @src: The parameter that represents source
 * @n: The parameter that represents the count of bytes
 *
 * Return: Returns a pointer to dest
 *
 */

char * _memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
