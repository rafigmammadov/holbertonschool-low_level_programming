#include <stdio.h>

/**
 * natural - Function that computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: Returns no result
 *
 */

void natural(void)
{
	int i = 0;
	int sum;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	i++;
	}
	printf("%d", sum);
	putchar('\n');
}
