#include "main.h"

/**
 * _strspn - The function that gets the length of a prefix substring
 *
 * @s: The parameter that represents string
 * @accept: The parameter that represents only bytes
 *
 * Return: Returns the number of bytes in the inital segment
 *
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, isFound;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		isFound = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				isFound = 0;
				break;
			}
		}
		if (isFound == 1)
			break;
	}

	return (i);
}
