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

	if (index >= dlistint_len(*head) || head == NULL || *head == NULL)
	return (-1);
	next = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(next);
		return (1);
	}

	for (i = 0; i <= index + 1; i++)
	{
		if (*head == NULL)
			break;
		if (i == index - 1)
			next = *head;
		if (i == index)
			fr = *head;
		*head = (*head)->next;
		if (i == index + 1)
			prev = *head;
	}
	if (next && next->next)
		next->next = fr->next;
	if (prev && prev->prev)
	prev->prev = fr->prev;
	free(fr);
	while (*head && (*head)->prev != NULL)
		*head = (*head)->prev;
	return (1);
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

