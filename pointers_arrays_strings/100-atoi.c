#include "main.h"

/**
 * _atoi - Function that convert a string to an integer
 *
 * @s: The parameter that represents string
 *
 * Return: Returns the integer which is converted from string
 *
 */

int _atoi(char *s)
{
	int len = 0;
	int i;
	unsigned int number = 0;
	int sign = 1;

	while (s[len] != '\0')
	{
		len += 1;
	}

	if (s[0] == '\0')
	{
		return (0);
	}

	for (i = 0; i <= len - 1; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			number = (number * 10) + (s[i] - '0');

			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
	}

	return (number * sign);
}
