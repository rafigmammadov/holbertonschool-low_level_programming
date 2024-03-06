#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse
 *
 * @s: The parameter that represents string
 *
 * Return: Returns no value
 *
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
