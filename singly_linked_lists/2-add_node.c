#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of a list_t list
 *
 * @head: The parameter that represents head of the linked list
 * @str: The parameter that represents a string
 *
 * Return: Returns the address of the new element, otherwise returns null
 *
 *
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t length;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length]; length++)
		;

	(*temp).str = strdup(str);
	(*temp).len = length;
	(*temp).next = *head;

	*head = temp;

	return (*head);
}
