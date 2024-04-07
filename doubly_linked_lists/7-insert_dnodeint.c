#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts
 * a new node ata given position
 *
 * @h: The parameter that represents head of the linked list
 * @idx: The parameter that represents index of the node
 * @n: The parameter that represents value of the node
 *
 * Return: Returns the address of the node
 *
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *iter = *h;
	unsigned int index = 0;

	if (temp == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (iter)
	{
		if (index == idx)
		{
			(*temp).n = n;
			(*temp).next = iter;
			(*temp).prev = (*iter).prev;

			if ((*iter).prev)
				(*(*iter).prev).next = temp;

			(*iter).prev = temp;
			return (temp);
		}

		iter = (*iter).next;
		index++;
	}

	if (index == idx)
		return (add_dnodeint_end(h, n));

	free(temp);
	return (NULL);
}
