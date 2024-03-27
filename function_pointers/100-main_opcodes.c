#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * main - Function that prints the opcodes of its own main function
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
	int i;

	unsigned char *main_ptr = (unsigned char *) &main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", main_ptr[i]);

		if (i == num_bytes - 1)
		{
			continue;
		}

		printf(" ");
	}

	printf("\n");

	return (0);
}
