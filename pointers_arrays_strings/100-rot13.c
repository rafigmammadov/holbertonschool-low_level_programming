#include "main.h"

/**
 * rot13 - Function that encodes a string using rot13
 *
 * @s: The parameter that represents string
 *
 * Return: Returns the string that has been changed
 *
 *
 */

char *rot13(char *s)
{
	int len = 0;
	int i;


	char input[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
	    		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd',
			'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
			'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	
	char output[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
			'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
			'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q',
			'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a',
			'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};


	while (s[len] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[len] == input[i])
			{
				s[len] = output[i];
				break;
			}
		}

		len++;
	}

	return (s);
}
