#include "main.h"

/**
 * reverse_array - The function that reverses the content of
 * an array of integers.
 *
 * @a: The parameter that represent array
 * @n: The parameter that represents number of
 * the elements of the array
 *
 * Return: Returns no value
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	for (i = 0, j = n - 1; i < j && j > i; i++, j--)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
}
