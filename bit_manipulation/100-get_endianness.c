#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * Return: Returns 0 if big endian or 1 if little endian
 *
 *
 */

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}

