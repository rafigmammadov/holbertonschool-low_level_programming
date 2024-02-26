#include "main.h"

/**
 * more_numbers - Function that prints 10 times
 * the numbers, from 0 to 14, followed by a new line.
 *
 * Return: Returns no value
 *
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		i++;
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');

			j++;
		}
	_putchar('\n');
	}
}
