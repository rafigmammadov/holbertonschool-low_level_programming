#include "main.h"

/**
 * main - Function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always returns 0
 *
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');

	return (0);
}
