#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: The parameter that represents the array
 * @size: The parameter that represents size
 *
 * Return: Returns no value
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int leftsum = 0;
	int rightsum = 0;

	for (i = 0; i < size; i++)
	{
		leftsum += a[(size + 1) * i];
		rightsum += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", leftsum, rightsum);
}
