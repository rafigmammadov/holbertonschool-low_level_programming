#include <stdio.h>

/**
 * main - Function that prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 *
 * Return: Always returns 0
 *
 */

#include <stdio.h>

int main(void)
{
	int count;
	unsigned long currentFib1 = 0, currentFib2 = 1, sum;
	unsigned long currentHalf1, currentHalf2, nextHalf1, nextHalf2;
	unsigned long half1, half2;


	for (count = 0; count < 92; count++)
	{
		sum = currentFib1 + currentFib2;
		printf("%lu, ", sum);

		currentFib1 = currentFib2;
		currentFib2 = sum;
	}

	currentHalf1 = currentFib1 / 10000000000;
	currentHalf2 = currentFib2 / 10000000000;
	nextHalf1 = currentFib1 % 10000000000;
	nextHalf2 = currentFib2 % 10000000000;


	for (count = 93; count < 99; count++)
	{
		half1 = currentHalf1 + nextHalf1;
		half2 = currentHalf2 + nextHalf2;

		if (nextHalf2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
        	}

	printf("%lu%lu", half1, half2);

	if (count != 98)
		printf(", ");

	currentHalf1 = nextHalf1;
	currentHalf2 = nextHalf2;
	nextHalf1 = half1;
	nextHalf2 = half2;
}

	printf("\n");
	return 0;
}
