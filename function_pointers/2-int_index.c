#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Function that searches for an integer
 *
 * @array: The parameter that represents the array
 * @size: The parameter that represents size of the array
 * @cmp: The parameter that represents function that compares values
 *
 * Description: This function is searching for integer
 *
 * Return: Returns the index of the integer, otherwise returns -1
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
