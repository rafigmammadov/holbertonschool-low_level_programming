#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - Function that prints a buffer.
 * @b: The parameter that represents buffer
 * @size: The parameter that represents size of buffer
 * Return: Returns no value
 */

void print_buffer(char *b, int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10 && i + j < size; ++j)
		{
			printf("%02x", (unsigned char)b[i + j]);
			if (j % 2 == 1)
				printf(" ");
		}

		for (; j < 10; ++j)
		{
			printf("   ");
			if (j % 2 == 1)
				printf(" ");
		}

		for (j = 0; j < 10 && i + j < size; ++j)
		{
			char ch = b[i + j];

			if (isprint(ch))
				printf("%c", ch);
			else
				printf(".");
		}

		if (i + j == size && j % 2 == 1)
			printf(" ");

		printf("\n");
	}
}
