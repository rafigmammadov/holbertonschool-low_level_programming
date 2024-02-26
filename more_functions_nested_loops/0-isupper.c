#include "main.h"

/**
 * _isupper - Function that checks for uppercase character
 *
 * @c: The parameter that will be checked
 *
 * Return: Returns 1 if c is uppercase
 * Returns 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
