#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: The parameter that represents the first integer
 * @m: The parameter that represents the second integer
 *
 * Return: Returns number of bits
 *
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size = sizeof(n) * 8 - 1;
	unsigned int flip = 0;
	unsigned long int i = 0;

	while (i <= size)
	{
		if ((n & 1UL) != (m & 1UL))
			flip++;

		n >>= 1;
		m >>= 1;

		i++;
	}

	return (flip);
}
