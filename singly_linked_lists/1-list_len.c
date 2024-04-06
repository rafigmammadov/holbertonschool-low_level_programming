#include "lists.h"

/**
 * list_len - Function that returns the number of elements
 * in a linked list_t list
 *
 * @h: The parameter that represents the singly linked list
 *
 * Return: Returns the number of elements
 *
 *
 */

size_t list_len(const list_t *h)
{
	size_t length;

	length = 0;

	while (h != NULL)
	{
		h = (*h).next;
		length++;
	}

	return (length);
}
