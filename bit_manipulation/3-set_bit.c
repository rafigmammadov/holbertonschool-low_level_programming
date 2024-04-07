#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 *
 * @n: The parameter that represents pointer to the integer
 * @index: The parameter that represents index of the bit
 *
 * Return: Returns 1 if it worked, otherwise returns -1
 *
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 6 - 1))
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
