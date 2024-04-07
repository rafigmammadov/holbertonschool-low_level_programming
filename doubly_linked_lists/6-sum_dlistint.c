#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of
 * all the data (n) of a dlistint_t linked list
 *
 * @head: The parameter that represents head of the linked list
 *
 *
 */


int sum_dlistint(dlistint_t *head)
{
	dlistint *iter = head;
	unsigned int sum = 0;

	if (iter == NULL)
	{
		return (0);
	}

	while (iter)
	{
		sum += (*iter).n;
		iter = (*iter).next;
	}

	return (sum);
}
