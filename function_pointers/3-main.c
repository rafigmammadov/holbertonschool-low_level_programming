#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - Function that contains operations of the calculation for some cases
 *
 * @argc: The parameter that represents the count of the parameters
 * @argv: The parameter that represents the arguments
 *
 * Return: Always returns 0
 *
 *
 */


int main(int argc, char **argv)
{
	int a;
	int b;
	char *arg = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (*arg != '+' && *arg != '-' && *arg != '*' && *arg != '/' && *arg != '%' &&
			strlen(arg) > 1)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*arg == '/' || *arg == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(arg)(a, b));

	return (0);
}
