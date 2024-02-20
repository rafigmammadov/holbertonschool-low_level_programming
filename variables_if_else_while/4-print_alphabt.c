#include <stdio.h>

/**
 * main - Function that prints alphabet the alphabet in lowercase
 * except q and e followed by a new line
 *
 * Return: Always returns 0
 *
 */


int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		if (lower != 'q' && lower != 'e')
			putchar(lower);

	putchar('\n');

	return (0);
}
