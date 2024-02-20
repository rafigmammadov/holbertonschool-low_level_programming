#include <stdio.h>

/**
 * main - Function that prints alphabet the alphabet in lowercase, and
 * then in uppercase, followed by a new line.
 *
 * Return: Always returns 0
 *
 */


int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);

	putchar('\n');

	return (0);
}
