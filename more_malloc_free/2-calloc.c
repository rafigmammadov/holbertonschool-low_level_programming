#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates
 * memory for an array, using malloc
 *
 * @nmemb: The parameter that represents the array
 * @size: The parameter that represents number of elements of the array
 *
 * Return: Returns no value
 *
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);

}
