#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 *
 * @head: the list.
 * @index: is the index of the node.
 * Return: returns the node of the list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index - 1; i++)
	{
		if (head)
			head = head->next;
		else
		{
			return (NULL);
		}

	}
	return (head->next);
}
