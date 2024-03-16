#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 *
 * @min: The parameter that represents minimum number
 * @max: The parameter that represetns maximum number
 *
 * Return: Returns the pointer to the array
 *
 *
 */

int *array_range(int min, int max)
{
	int *array;
	unsigned int len = max - min + 1;
	unsigned int i;

	if (min > max)
	{
		return (NULL);
	}

	array = (int *)malloc(len * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len && min <= max; i++, min++)
	{
		array[i] = min;
	}

	return (array);
}
