#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of
 * a dlistint_t list
 *
 * @head: The parameter that represents head of the linked list
 * @n: The parameter that represents value of the node
 *
 * Return: Returns the address of the new element, otherwise returns null
 *
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *iter;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	(*temp).n = n;
	(*temp).next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	iter = *head;

	while ((*iter).next)
	{
		iter = (*iter).next;
	}

	(*temp).prev = iter;
	(*iter).next = temp;

	return (temp);
}
