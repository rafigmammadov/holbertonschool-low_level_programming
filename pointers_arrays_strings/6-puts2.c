#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - Function that prints every other character of
 * a string, starting with the first character, followed by a new line.
 *
 * @str: The parameter that represents string
 *
 * Return: Returns no value
 *
 */

void puts2(char *str)
{
	int i = 0;
	int len = _strlen(str);

	for (i = 0; i <= len - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}

	_putchar('\n');
}
