#include "main.h"

/**
 * _sqrt_find - Function that finds the square root of a number
 *
 * @num: The parameter that represents the number
 * @root: The parameter that represents the root
 *
 * Return: Returns the function itself to find the square root
 *
 */

int _sqrt_find(int num, int root);
int _sqrt_recursion(int n);

int _sqrt_find(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}

	if (root == num / 2)
	{
		return (-1);
	}

	return (_sqrt_find(num, root + 1));
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 *
 * @n: The parameter that will be used for calculation
 *
 * Return: Returns the natural square root
 *
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n <= 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (_sqrt_find(n, root));
}
