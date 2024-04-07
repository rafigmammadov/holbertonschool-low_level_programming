#include <string.h>
#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list_t list
 *
 * @head: The parameter that represents head of the linked list
 * @str: The parameter that represents a string
 *
 * Return: Returns the address of the new element, otherwise returns null
 *
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *iter;
	size_t length;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length]; length++)
		;

	(*temp).str = strdup(str);
	(*temp).len = len;
	(*temp).next = NULL;

	iter = *head;

	if (iter == NULL)
	{
		*head = temp;
	}

	else
	{
		while ((*iter).next != NULL)
		{
			iter = (*iter).next;
		}
		(*iter).next = temp;
	}

	return (*temp);
}
