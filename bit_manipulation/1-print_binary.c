#include "main.h"

/**
 * print_binary - Function prints the binary representation of a number
 *
 * @n: The parameter that represents the integer
 *
 * Return: Returns no value
 *
 *
 */

void print_binary(unsigned long int n)
{
	long int size = sizeof(n) * 8 - 1;
	char c;
	int flag = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	if (n == 1)
	{
		printf("1");
		return;
	}

	while (size >= 0)
	{
		c = (n >> size) & 1;

		if (flag || c == 1)
		{
			_putchar(c + '0');
			flag = 1;
		}

		size--;
	}
}
