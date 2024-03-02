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

	int idx = 0;
	int sep_idx = 0;
	char separators[] = {' ', '\n', '\t', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		sep_idx = 0;
		while (separators[sep_idx] != '\0')
		{
			if (s[0] >= 'a' && s[0] <= 'z')
			{
				s[0] = s[0] - 32;
				idx++;
			}

			if (s[idx] == separators[sep_idx] && (s[idx + 1] >= 'a'
					&& s[idx + 1] <= 'z'))
			{
				s[idx + 1] = s[idx + 1] - 32;
			}
			sep_idx++;
		}
	}

	return (s);
}

