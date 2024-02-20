#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Function that checks and prints number of
 * the last digit of an integer
 *
 * Return: Always returns 0
 *
 */
int main(void)
{
	int n;
	int the_last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	the_last_digit = n % 10;

	if (the_last_digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, the_last_digit);
	else if (6 > the_last_digit && 0 != the_last_digit)
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
		n, the_last_digit);
	else
		printf("Last digit of %i is %i and is 0\n", n, the_last_digit);
	return (0);
}
