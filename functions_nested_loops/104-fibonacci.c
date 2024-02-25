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
	unsigned int count = 0;
	unsigned long int a, b, c;

	a = 1;
	b = 2;

	printf("%lu, %lu, ", a, b);

	while (count < 96)
	{
		c = a + b;
		a = b;
		b = c;

		if (count == 95)
		{
		    printf("%lu", c);
		    break;
		}		

		printf("%lu, ", c);

		count++;
	}

	printf("\n");

	return (0);
}
