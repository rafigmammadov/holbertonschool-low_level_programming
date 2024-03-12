#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Function that finds the length of the string
 *
 * @str: The parameter that represents string
 *
 * Return: Return the length of the string
 *
 *
 */

int _strlen(char *str)
{
	unsigned int size = 0;

	if (str == NULL)
	{
		str = "";
	}

	while (str[size] != '\0')
	{
		size++;
	}

	return (size);
}

/**
 * str_concat - Function that concatenates two strings
 *
 * @s1: The parameter that represents the first string
 * @s2: The parameter that represents the second string
 *
 * Return: Returns null if there is some failure, otherwise return pointer
 * to the newly allocated space in memory which contains
 * the contents of s1 and s2
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size;
	char *array;
	unsigned int i = 0;

	size = _strlen(s1) + _strlen(s2);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != '\0')
		{
			*(array + i) = *s1;
			s1++;
		}

		else
		{
			*(array + i) = *s2;
			s2++;
		}

		i++;
	}

	return (array);
}
