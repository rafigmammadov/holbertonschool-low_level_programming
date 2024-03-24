#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters
 *
 * @n: The parameter that represents the variable arguments
 *
 * Return: Returns the sum of parameters and arguments
 *
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int)
	}

	va_end(ap);

	return (sum);
}
