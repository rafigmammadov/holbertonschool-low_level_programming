#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of
 * a dlistint_t linked list
 *
 * @head: The parameter that represents head of the linked list
 * @index: The parameter that represents index of the node
 *
 * Return: Returns the address of the node, otherwise returns null
 *
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *iter;
	unsigned int to_index = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (to_index != index + 1)
	{
		iter = head;
		head = (*head).next;

		to_index++;
	}

	return (iter);
}
