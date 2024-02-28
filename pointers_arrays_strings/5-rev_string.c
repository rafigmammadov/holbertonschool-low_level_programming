#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - Function that reverses a string.
 *
 * @s: The parameter that represents string
 *
 * Return: Returns no value
 *
 */

void rev_string(char *s)
{
	int i;
	int len = _strlen(s);
	int j;
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
	}
}
