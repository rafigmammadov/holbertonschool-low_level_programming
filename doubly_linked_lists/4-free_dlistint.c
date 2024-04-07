#include "lists.h"

/**
 * free_dlistint - Function that frees a dlistint_t list
 *
 * @head: The parameter that represents head of the linked list
 *
 * Return: Returns no value
 *
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = (*head).next;

		free(temp);
	}
}
