#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints all arguments it receives
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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
