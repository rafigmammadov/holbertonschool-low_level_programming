#include <stdio.h>

/**
 * main - Function that prints all possible combinations
 * of two two-digit numbers.
 *
 *
 * Return: Always returns 0
 *
 */


int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if (((k + l) > (i + j) && k >= i) || k > i)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					if (i + j + k + l == '9' + '9' + '9' + '9' && i == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
