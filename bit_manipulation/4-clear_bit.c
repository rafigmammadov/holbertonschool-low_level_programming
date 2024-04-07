#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 *
 * @n: The parameter that represents pointer to the integer
 * @index: The parameter that represents index of the bit
 *
 * Return: Returns 1 if it worked, otherwise returns -1
 *
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
