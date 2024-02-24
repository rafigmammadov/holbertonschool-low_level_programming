#include "main.h"

/**
 * times_table - Function that prints the 9 times
 * table, starting with 0.
 *
 *
 * Return: There is no return for this function
 *
 *
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			_putchar((i * j) + '0');
			}
		}
		_putchar('\n');
	}
}
