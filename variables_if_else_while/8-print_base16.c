#include <stdio.h>

/**
 * main - Function that prints all the numbers
 * of base 16 in lowercase, followed by a new line.
 *
 * Return: Always returns 0
 *
 */


int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar('0' + i);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
