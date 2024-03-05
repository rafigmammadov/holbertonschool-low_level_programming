#include "main.h"

/**
 *_memset - Function that fills memory with a constant byte
 *
 * @s: The parameter that represents string
 * @b: The parameter that represents constant size of the buffer with bytes
 * @n: The parameter that represents size of the buffer with bytes
 *
 * Return: Returns a pointer to the memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
