#include "main.h"

/**
 * swap_int- Function that swaps the values of two integers.
 *
 * @a: The parameter that swaps with the value of the variable b
 * @b: The parameter that swaps with the value of the variable a
 *
 * Return: Returns no value
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
