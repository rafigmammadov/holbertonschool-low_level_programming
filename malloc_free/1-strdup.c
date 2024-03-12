#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 *
 * @str: The parameter that represents the string
 *
 * Return: Returns null if str is null
 * or insufficient memory was available, otherwise it returns
 * pointer to the string
 *
 *
 */

char *_strdup(char *str)
{
	unsigned int size = 0;
	char *duplicated;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
	}

	duplicated = malloc(sizeof(char) * size + 1);

	if (duplicated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(duplicated + i) = str[i];
	}

	return (duplicated);
}
