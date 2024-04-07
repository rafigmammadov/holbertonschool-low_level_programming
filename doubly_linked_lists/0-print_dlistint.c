#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 *
 * @h: The parameter that represents the node of the linked list
 *
 * Return: Returns the count of nodes
 *
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
	{
		return (num);
	}

	while (h)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		num++;
	}

	return (num);
}
