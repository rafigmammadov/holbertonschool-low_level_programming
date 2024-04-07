#include "lists.h"
#include <stdio.h>

/**
 * premain - Function that prints
 * "You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
 * before the main function is executed
 *
 * __attribute__ - The parameter that represents gcc attribute
 * constructor - The parameter that represents gcc attribute
 *
 * Return: Returns no value
 *
 *
 */

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
