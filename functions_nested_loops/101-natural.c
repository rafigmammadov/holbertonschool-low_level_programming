#include <stdio.h>

/**
 * main - Function that computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: Always returns 0
 *
 */

int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	i++;
	}

	printf("%d", sum);

	putchar('\n');

	return (0);
}
