#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Function that returns a pointer
 * to a 2 dimensional array of integers
 *
 * @width: The parameter that represents width of the array
 * @height: The parameter that represents height of the array
 *
 * Return: Returns null on failure, otherwise returns pointer to the array
 *
 *
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j, k;

	if (height < 1 || width < 1)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array[i]);

			free(array);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			array[j][k] = 0;
		}
	}

	return (array);
}
