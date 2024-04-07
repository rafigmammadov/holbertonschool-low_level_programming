#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 *
 * @n: The parameter that represents the integer
 * @index: The parameter that represents the index
 *
 * Return: Returns the value of the bit at index index or -1 if
 * an error occured
 *
 *
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 6 - 1))
		return (-1);

	mask = 1UL << index;

	return (n & mask ? 1 : 0);
}
