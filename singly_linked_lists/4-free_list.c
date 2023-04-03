#include "lists.h"

/**
 * free_list - frees a list.
 *
 * @head: list a free.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free(head->str);
	free(head->next);
	free(head);
}
