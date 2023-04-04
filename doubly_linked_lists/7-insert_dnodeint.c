#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: the list.
 * @idx:  is the index of the list where the new node should be added.
 * @n: the value.
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = NULL;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while (*h)
	{
		if (i == idx - 1)
		{
			tmp = (*h)->next;
			(*h)->next = new;
			break;
		}
		*h = (*h)->next;
		i++;
	}
	if (i + 1 != idx)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = *h;
	new->next = tmp;
	while ((*h)->prev)
		*h = (*h)->prev;
	return (*h);
}
