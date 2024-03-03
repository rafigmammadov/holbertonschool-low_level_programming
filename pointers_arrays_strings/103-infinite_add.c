#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Function that adds two numbers.
 *
 * @n1: The parameter that represents the first operand as an array
 * @n2: The parameter that represents the second operand as an array
 * @r: The parameter that will be used to store result
 * @size_r: The parameter that represents the buffer size
 *
 * Return: Returns a pointer to the result
 *
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int start;
	int end;
	int i;
	int j;
	int k;

	if (len1 > size_r - 2 || len2 > size_r - 2)
	{
		return (0);
	}

	for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry > 0;
		--i, --j, ++k)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;

		int sum = digit1 + digit2 + carry;

		carry = sum / 10;

		r[k] = (sum % 10) + '0';
	}

	for (start = 0, end = k - 1; start < end; ++start, --end)
	{
		char temp = r[start];

		r[start] = r[end];
		r[end] = temp;
	}

	r[k] = '\0';

	return (r);
}
