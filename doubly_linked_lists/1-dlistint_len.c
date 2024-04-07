#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements
 * in a linked dlistint_t list
 *
 * @h: The parameter that represents head of the linked list
 *
 * Return: Returns the length of the linked list
 *
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	if (h == NULL)
	{
		return (length);
	}

	while (h)
	{
		length++;
		h = (*h).next;
	}

	return (length);
}
