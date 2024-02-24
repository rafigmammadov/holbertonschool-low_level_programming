#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer.
 * @n: The parameter that will be computed
 *
 * Return: Returns absolute value of the parameter
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n - 2 * n);
	}
	else
	{
		return (n);
	}
}
