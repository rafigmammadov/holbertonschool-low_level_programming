#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 *
 * @dest: The parameter that represents destination
 * @src: The parameter that represents source
 *
 * Return: Returns connected string to the each other
 *
 */

char _strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);

		if (*(src + j) == '\0')
		{
			break;
		}

		i++;
		j++;
	}

	return (dest);
}
