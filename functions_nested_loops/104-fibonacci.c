#include <stdio.h>

/**
 * main - Function that prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 *
 * Return: Always returns 0
 *
 */

int main(void)
{
	int i;
	unsigned long int fib[98];

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 98; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < 97; i++)
	{
		printf("%lu, ", fib[i]);
	}

	printf("%lu\n", fib[97]);

	return (0);
}
