#include <stdio.h>

/**
 * main - Function that finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 *
 * Return: Always returns 0
 *
 *
 */

int main(void)
{
	long int i;
	long int n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}

	printf("%ld\n", i);

	return (0);
}
