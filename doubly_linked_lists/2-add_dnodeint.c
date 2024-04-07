#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beginning of
 * a dlistint_t list
 *
 * @head: The parameter that represents head of the linked list
 * @n: The parameter that represents value of the node
 *
 * Return: Returns the address of the new element, otherwise returns null
 *
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	(*temp).n = n;
	(*temp).prev = NULL;
	(*temp).next = *head;

	if (*head)
	{
		(**head).prev = temp;
	}

	*head = temp;

	return (temp);
}
