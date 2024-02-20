#include <stdio.h>

/**
 * main - Function that prints all single digit numbers of base 10 starting
 * from 0, followed by a new line.
 *
 * Return: Always returns 0
 *
 */


int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);

	putchar('\n');

	return (0);
}
