#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character.
 * @c: The parameter which will be checked for alphabeticity
 *
 * Return: If character is alphabetic returns 1, otherwise 0
 *
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
