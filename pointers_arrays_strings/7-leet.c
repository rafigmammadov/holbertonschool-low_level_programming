#include "main.h"

/**
 * leet - Function that encodes a string into 1337.
 *
 * @s: The parameter that represents string
 *
 * Return: Returns changed and transformed string
 *
 */

char *leet(char *s)
{
	int i;
	int j;
	int l_letters[] = {97, 101, 111, 116, 108};
	int u_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; u_letters[j] != '\0'; j++)
		{
			if (s[i] == u_letters[j] || s[i] == l_letters[j])
				s[i] = numbers[j];
		}
	}

	return (s);
}
