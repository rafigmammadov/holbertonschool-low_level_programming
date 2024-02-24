#include <stdio.h>

/**
 * main - Function that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 *
 * Return: Always returns 0
 *
 */

int main(void)
{
	int i;
	long long int fib[50];

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < 49; i++)
	{
		printf("%lld, ", fib[i]);
	}

	printf("%lld\n", fib[49]);

	return (0);
}
