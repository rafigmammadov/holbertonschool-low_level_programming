#include "main.h"

/**
 * print_alphabet_x10 - Function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
