#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints the number of
 * arguments passed into it
 *
 * @argc: The parameter that represents the count of arguments
 * @argv: The parameter that represents the array of the characters
 *
 * Return: Always returns 0
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
