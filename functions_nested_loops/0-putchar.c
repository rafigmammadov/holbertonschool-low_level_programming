#include "main.h"

/**
 * main - Function that prints _putchar
 * followed by a new line.
 *
 *
 * Return: Always returns 0
 */

int main(void)
{
	int i = 0;
	char str[] = "_putchar";

	while (i < 8)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
