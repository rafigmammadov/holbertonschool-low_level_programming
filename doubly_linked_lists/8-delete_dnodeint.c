#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes the node at index
 * index of a dlistint_t linked list
 *
 * @head: The parameter that represents head of the linked list
 * @index: The parameter that represents index of the node
 *
 * Return: Returns 1 if succeeded, otherwise returns -1
 *
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int temp_index = 0;
	dlistint_t *temp = *head;

	if (!head || !temp)
		return (-1);

	if (index == 0)
	{
		if ((*temp).next)
			(*(**head).next).prev = NULL;
		*head = (**head).next;
		free(temp);
		return (1);
	}

	while (temp_index < index)
	{
		if (!(*temp).next)
			return (-1);
		temp = (*temp).next;
		temp_index++;
	}

	(*(*temp).prev).next = (*temp).next;

	if ((*temp).next)
		(*(*temp).next).prev = (*temp).prev;

	free(temp);

	return (1);
}

