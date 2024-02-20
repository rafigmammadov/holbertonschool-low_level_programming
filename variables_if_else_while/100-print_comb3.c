#include <stdio.h>

/**
 * main - Function that prints all possible different combinations
 * of two digits.
 *
 * Return: Always returns 0
 *
 */


int main(void)
{
	int i;
	int k;

	for (i = 0; i < 9; i++)
	{
	for (k = 0; k < 10; k++)
	{
		putchar('0' + i);
		putchar('0' + k);
		if (i < 8 || k < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}

	putchar('\n');

	return (0);
}
