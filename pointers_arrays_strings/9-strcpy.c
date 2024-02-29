#include "main.h"

/**
 * _strcpy - Function that copies the string pointed
 * to by src, including the terminating null byte (\0), to the buffer
 * pointed to by dest.
 *
 * @dest: The parameter that string will be copied
 * @src: The parameter that plays function of the source for dest
 *
 * Return: Returns the buffer pointed to by dest
 *
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i += 1;
	}

	for (j = 0; j < i; j++)
	{
		*(dest + j) = *(src + j);
	}

	*(dest + i) = '\0';

	return (dest);
}
