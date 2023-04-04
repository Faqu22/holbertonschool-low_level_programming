#include "lists.h"

/**
 * sum_dlistint -  sum of the all data of the list.
 *
 * @head: the list.
 * Return: returns the sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
