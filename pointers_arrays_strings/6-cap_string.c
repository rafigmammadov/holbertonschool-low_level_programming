#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string
 *
 * @s: The parameter that represents string
 *
 * Return: Returns the string that capitalized all words
 *
 *
 */

char *cap_string(char *s)
{
	int i;
	int j;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			if (s[i] == separators[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] -= 32;
					break;
				}
			}
		}
	}

	return (s);
}
