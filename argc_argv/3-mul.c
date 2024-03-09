#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Function that multiplies two numbers
 *
 * @argc: The parameter that represents the count of arguments
 * @argv: The parameter that represents the array of the characters
 *
 * Return: Always returns 0
 *
 *
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
