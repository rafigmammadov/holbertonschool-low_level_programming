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
	int current_position = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			length++;
			arg++;
		}

		length++;
	}

	array = (char *)malloc((length + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
			array[current_position++] = *arg++;

		array[current_position] = '\n';
	}

	array[current_position] = '\0';

	return (array);
}
