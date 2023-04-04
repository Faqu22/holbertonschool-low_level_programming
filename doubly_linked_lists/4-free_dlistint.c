#include "lists.h"

/**
 * free_dlistint - free a list.
 *
 * @head: list a free.
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->prev == NULL)
		{
			free_dlistint(head->next);
			free(head->prev);
		}
		if (head->next == NULL)
		{
			free_dlistint(head->prev);
			free(head->next);
		}
		free(head);
	}
}
