#include "main.h"

/**
 * _islower - Function that checks for lowercase character.
 *
 * Return: Returns 1 if argument is lower, otherwise 0
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
