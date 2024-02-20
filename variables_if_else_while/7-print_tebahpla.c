#include <stdio.h>

/**
 * main - Function that prints the lowercase
 * alphabet in reverse, followed by a new line.
 *
 * Return: Always returns 0
 *
 */


int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);

	putchar('\n');

	return (0);
}
