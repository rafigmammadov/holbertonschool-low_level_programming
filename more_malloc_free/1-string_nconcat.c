#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates two strings
 *
 * @s1: The parameter that represents the first string
 * @s2: The parameter that represents the second string
 * @n: The parameter that represents the size of the second string
 *
 * Return: Returns a pointer to the new string
 *
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	array = (char *)malloc((len1 + n + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		array[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		array[len1 + j] = s2[j];
	}

	array[len1 + j] = '\0';

	return (array);
}
