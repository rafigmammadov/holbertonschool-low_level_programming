#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings, followed by a new line
 *
 * @separator: The parameter that represents the string
 * @n: The parameter that represents the number of strings
 *
 * Return: Returns no value
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}

		printf("%s", s);

		if (separator != NULL && n != i + 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(ap);
}
