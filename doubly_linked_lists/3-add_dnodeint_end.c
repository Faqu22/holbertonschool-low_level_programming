#include "lists.h"

/**
 * add_dnodeint_end -  Adds a new node int in the end.
 *
 * @head: the list to which it will be added.
 * @n: the value of int.
 * Return: the address of the new element, or NULL if it failed.
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (temp)
	{
		while (temp->next != NULL)
			temp = temp->next;
		new->next = temp;
		temp->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	new->next = NULL;
	return (new);


}
