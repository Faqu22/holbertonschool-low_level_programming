#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list.
 *
 * @head: the list.
 * @index: index of node to delete.
 * Return: 1 if success, -1 if failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *next = NULL;
	dlistint_t *prev = NULL;
	dlistint_t *fr = NULL;


	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	next = *head;
	if (index == 0)
	{
		*head = next->next;
		prev = next->next;
		free(next);
		if (prev)
			prev->prev = NULL;
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		next = next->next;
		if (!next || !(next->next))
			return (-1);
	}
	prev = next->next;
	fr = prev->next;
	next->next = fr;
	if (fr)
		fr->prev = next;
	free(prev);
	return (1);
}

