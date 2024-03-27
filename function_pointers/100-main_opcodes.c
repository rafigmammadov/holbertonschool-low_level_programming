#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - Function that prints the opcodes of its own main function
 *
 * @num_bytes: The number of bytes that will be printed
 *
 * Return: Returns no value
 *
 *
 */

void print_opcodes(int num_bytes)
{
	int i;

	unsigned char *main_ptr = (unsigned char *) &print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i]);

		if (i != num_bytes - 1)
		{
			printf(" ");
		}
	}

	printf("\n");
}


/**
 * main - Function that takes arguments and works with them
 *
 * @argc: The parameter that represents the count of arguments
 * @argv: The parameter that represents arguments
 *
 * Return: Always returns 0
 *
 *
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes(num_bytes);

	return (0);
}
