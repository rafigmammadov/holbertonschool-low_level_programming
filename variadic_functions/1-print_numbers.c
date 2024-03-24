#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers, followed by a new line
 *
 * @separator: The parameter that represents the string
 * @n: The parameter that represents the number of integers
 *
 * Return: Returns no value
 *
 *
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(ap);
}
