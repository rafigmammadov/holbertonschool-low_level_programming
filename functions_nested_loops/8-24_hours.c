#include "main.h"

/**
 * jack_bauer - Function that prints every
 * minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 *
 * Return: Always returns 0
 *
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours < 24)
	{
		minutes = 0;

		while (minutes < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
			minutes++;
		}
	hours++;
	}
}
