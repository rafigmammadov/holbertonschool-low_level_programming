#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - Function that executes a function given as
 * a parameter on each element of an array
 *
 * @array: The parameter that represents the array
 * @size: The parameter that represents size of the array
 * @action: The parameter that represents helper function
 *
 * Description: This function is iterating array for some use cases
 *
 * Return: Returns no value
 *
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}	
