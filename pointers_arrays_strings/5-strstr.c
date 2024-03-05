#include "main.h"

/**
 * _strstr - Function that locates a substring
 *
 * @haystack: The parameter that represents string
 * @needle: The parameter that will be used to search occurence
 *
 * Return: Returns the pointer to the beginning of the located substring
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int index_haystack = 0, index_needle = 0;

	while (haystack[index_haystack])
	{
		while (needle[index_needle])
		{
			if (haystack[index_haystack + index_needle] != needle[index_needle])
			{
				break;
			}

			index_needle++;
		}

		if (needle[index_needle] == '\0')
		{
			return (haystack + index_haystack);
		}

		index_haystack++;
	}

	return ('\0');
}
