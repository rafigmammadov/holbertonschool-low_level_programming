#include "holberton.h"
/**
 * _strncat - concatenates two strings with a specified limit
 *
 * @dest: destination string.
 * @src: source string.
 * @n: maximum number of characters to concatenate from src.
 *
 * Return: a pointer to the destination string.
 *
 *
 */


char *_strncat(char *dest, char *src, int n)
{
	int dest_count = 0, src_count = 0;

	while (*(dest + dest_count) != '\0')
	{
		dest_count++;
	}

	while (src_count < n)
	{
		*(dest + dest_count) = *(src + src_count);
		if (*(src + src_count) == '\0')
			break;
		dest_count++;
		src_count++;
	}

	return (dest);
}

