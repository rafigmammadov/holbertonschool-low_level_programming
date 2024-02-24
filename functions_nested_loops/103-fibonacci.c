#include <stdio.h>

/**
 * main - Function that finds and prints
 * the sum of the even-valued terms, followed by a new line.
 *
 *
 * Return: Always returns 0
 *
 */

int main(void)
{
	int term1 = 1;
	int term2 = 2;
	int nextterm;
	long sum;

	while (term1 <= 4000000)
	{
		if (term1 % 2 == 0)
		{
			sum += term1;
		}
	nextterm = term1 + term2;
	term1 = term2;
	term2 = nextterm;
	}

	printf("%ld\n", sum);

	return (0);
}
