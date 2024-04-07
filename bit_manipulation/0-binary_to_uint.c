#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 *
 * @b: The parameter that represents binary number which will be converted
 *
 * Return: Returns the converted number
 *
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int index = 0;

	if (!b)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		index++;
	}

	index = 0;
	while (b[index] != '\0')
	{
		num <<= 1;
		if (b[index] == '1')
			num += 1;
		index++;
	}

	return (num);
}

