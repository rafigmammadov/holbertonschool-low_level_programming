#include <stdio.h>

/**
 * main - Function that prints all possible different combinations
 * of three digits.
 *
 *
 * Return: Always returns 0
 *
 */

int main(void)
{
	int i;
	int k;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (k = i + 1; k < 9; k++)
		{
			for (j = k + 1; j < 10; j++)
			{
				putchar('0' + i);
				putchar('0' + k);
				putchar('0' + j);
				if (i < 7 || k < 8 || j < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}
