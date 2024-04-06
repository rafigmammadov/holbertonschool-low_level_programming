#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list
 *
 * @h: The parameter that represents the singly linked list
 *
 * Return: Returns the number of nodes
 *
 *
 */

size_t print_list(const list_t *h)
{
	size_t length;

	length = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}

		h = (*h).next;

		length++;
	}

	return (length);
}
