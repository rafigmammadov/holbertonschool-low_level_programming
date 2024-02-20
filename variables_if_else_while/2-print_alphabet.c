#include <stdio.h>

/**
 * main - Function that prints
 * the alphabet in lowercase, followed by a new line.
 *
 * Return: Always returns 0
 *
 */

int main(void)
{
	char alphabet = 'a';


	while ('z' >= alphabet)
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
