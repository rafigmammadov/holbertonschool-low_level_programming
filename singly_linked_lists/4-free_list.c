#include "lists.h"


/**
 * free_list - Function that frees a list_t list
 *
 * @head: The parameter that represents head of the linked list
 *
 * Return: Returns no value
 *
 *
 */


void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = (*head).next;

		free((*temp).str);
		free(temp);
	}
}