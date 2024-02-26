#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints the numbers
 * from 1 to 100, followed by a new line. But for multiples
 * of three print Fizz instead of
 * the number and for the multiples of five print Buzz. For numbers
 * which are multiples of both three and five print FizzBuzz.
 *
 * Return: Always returns 0
 *
 *
 */

int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (i % 5 == 0)
		{
			if (i < 100)
			{
				printf("Buzz ");
			}
			
			else
			{
				printf("Buzz");
			}
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}

		else
		{
			printf("%d ", i);
		}

		i++;
	}

	putchar('\n');
	
	return (0);
}
