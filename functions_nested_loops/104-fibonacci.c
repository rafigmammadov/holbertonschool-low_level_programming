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
	unsigned long int front1 = 0, back1 = 1, front2 = 0, back2 = 2;
	unsigned long int temp1, temp2, temp3;
	int count;

	printf("%lu, %lu, ", back1, back2);

	for (count = 2; count < 98; count++)
	{
		if (back1 + back2 > 10000000000 || front2 > 0 || front1 > 0)
		{
			temp1 = (back1 + back2) / 10000000000;
			temp2 = (back1 + back2) % 10000000000;
			temp3 = front1 + front2 + temp1;
			front1 = front2, front2 = temp3;
			back1 = back2, back2 = temp2;
			printf("%lu%010lu", front2, back2);
		}
		else
		{
			temp2 = back1 + back2;
			back1 = back2, back2 = temp2;
			printf("%lu", back2);
		}

		if (count != 97)
			printf(", ");
	}

	printf("\n");
	return (0);
}
