#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that prints a name
 *
 * @name: The parameter that represents string
 * @f: The parameter that represents function that prints the string
 *
 * Description: This function takes the argument and prints it
 *
 * Return: Returns no value
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}

	f(name);
}
