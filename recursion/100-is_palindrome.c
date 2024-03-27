#include "main.h"

/**
 * _strlen_recursion - Function that finds the length of string recursively
 *
 * @str: The parameter that represents string
 *
 * Return: Always returns 0
 *
 *
 */

int _strlen_recursion(char *str)
{
	if (*str)
	{
		str++;
		return (1 + _strlen_recursion(str));
	}

	return (0);
}


/**
 * palindrome_checker - Function that returns 1 if a string is
 * a palindrome and 0 if not.
 *
 * @str: The parameter that represents string
 * @end: The parameter that represents the length of the string
 * @start: The paremeter that represents the start of the string
 *
 * Return: Returns 1 if the string is a palindrome, otherwise returns 0
 *
 *
 */

int palindrome_checker(char *str, int end, int start)
{
	if (start >= end)
	{
		return (1);
	}

	if (str[end] == str[start])
	{
		return (0);
	}

	return (0);
}


/**
 * is_palindrome - Function that helps
 * to call palindrome_checker function recursively
 *
 * @s: The parameter that represents the string to be checked
 *
 * Return: Returns 1 if the string is a palindrome, otherwise 0
 *
 *
 */


int is_palindrome(char *s)
{
	int end = _strlen_recursion(s);
	int start = 0;

	return (palindrome_checker(s, end - 1, start));
}
