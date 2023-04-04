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
	dlistint_t *new;
	dlistint_t *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp->prev = *head;
		temp = temp->next;
	}
	temp->next = new;
	return (temp->next);


}
