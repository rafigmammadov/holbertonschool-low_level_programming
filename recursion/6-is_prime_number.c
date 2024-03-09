#include "main.h"

/**
 * _isprime - Function that checks the number as prime number
 *
 * @num: The number that represents the number
 * @operand: The number that represents the operand number
 *
 * Return: Returns the function itself
 *
 *
 */

int _isprime(unsigned int num, unsigned int operand)
{
	if (num % operand == 0)
	{
		if (num == operand)
		{
			return (1);
		}

		else
		{
			return (0);
		}
	}

	return (0 + _isprime(num, operand + 1));
}


/**
 * is_prime_number - Function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 *
 * @n: The parameter to be checked as prime number
 *
 * Return: Returns 1 if the input integer is a prime number, otherwise return 0
 *
 *
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}

	if (n <= 0)
	{
		return (0);
	}
	return (_isprime(n, 2));
}
