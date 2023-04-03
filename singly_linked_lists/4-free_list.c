#include "lists.h"

/**
 * free_list - frees a list.
 *
 * @head: list a free.
 */
void free_list(list_t *head)
{
	struct list_s *temp;

	if (head == NULL)
		return;
	while(head->next != NULL)
	{
		free(head->str);
		temp = head->next;
		head = head->next;
		free(temp);
	}
	free(head->next);
	free(head);
}
