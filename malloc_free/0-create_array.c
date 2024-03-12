#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of
 * chars, and initializes it with a specific char.
 *
 * @size: The parameter that represents size of the malloc
 * @c: The parameter that represents character which will be initialized
 *
 * Return: Returns null if size is 0, otherwise returns a pointer to the array
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(array + i) = c;
	}

	return (array);
}
