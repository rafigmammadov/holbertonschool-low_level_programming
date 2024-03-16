#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that that allocates memory using malloc
 *
 * @b: The parameter that represents size of the malloc
 *
 * Return: Returns no value
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
