#include "lists.h"

size_t dlistint_len(const dlistint_t *h);
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
	dlistint_t *prev = NULL;

	if (idx == 0)
		add_dnodeint(h, n);
	if (idx > dlistint_len(*h))
		return (NULL);
	if (idx == dlistint_len(*h))
		add_dnodeint_end(h, n);
	new = malloc(sizeof(dlistint_t));
	while (i < idx)
	{
		if (i == idx - 1)
		{
			tmp = (*h)->next;
			prev = (*h);
			(*h)->next = new;
			break;
		}
		*h = (*h)->next;
		i++;
	}
	new->n = n;
	new->prev = prev;
	new->next = tmp;

	for (i = 0; i < 2; i++)
		*h = (*h)->next;
	(*h)->prev = new;
	while((*h)->prev != NULL)
		*h = (*h)->prev;
	return (new);
}

/**
 * dlistint_len -  Give the number of linkes associeted.
 *
 * @h:is a list.
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}

