#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Function that concatenates all the arguments of your program
 *
 * @ac: The parameter that represents count of the arguments
 * @av: The parameter that represents arguments
 *
 * Return: Returns a pointer to the string, otherwise returns null
 *
 *
 */

char *argstostr(int ac, char **av)
{
	int i;
	int length = 0;
	char *array;
	int current_position;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}

	array = (char *)malloc((length + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		strcpy(array + current_position, av[i]);
		current_position += strlen(av[i]);
		array[current_position++] = '\n';
	}

	array[current_position] = '\0';

	return (array);
}
