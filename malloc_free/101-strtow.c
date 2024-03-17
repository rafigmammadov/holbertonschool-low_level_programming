#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees the 2-dimensional array of characters
 *
 * @grid: The parameter that represents 2D array to free
 * @height: The parameter that represents height of the array
 *
 * Return: Returns no value
 *
 *
 */


void free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - Function that splits a string into words.
 *
 * @str: The parameter that represents input string
 *
 * Return: pointer to an array of strings
 *
 *
 */


char **strtow(char *str)
{
	char **output;
	unsigned int i, h, j, a;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = h = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			h++;
	output = malloc((h + 1) * sizeof(char *));
	if (output == NULL || h == 0)
	{
		free(output);
		return (NULL);
	}
	for (i = a = 0; i < h; i++)
	{
		for (j = a; str[j] != '\0'; j++)
		{
			if (str[j] == ' ')
				a++;
			if (str[j] != ' ' && (str[j + 1] == ' ' || str[j + 1] == '\0'))
			{
				output[i] = malloc((j - a + 2) * sizeof(char));
				if (output[i] == NULL)
				{
					free_grid(output, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a <= j; a++, j++)
			output[i][j] = str[a];
		output[i][j] = '\0';
	}
	output[i] = NULL;
	return (output);
}
