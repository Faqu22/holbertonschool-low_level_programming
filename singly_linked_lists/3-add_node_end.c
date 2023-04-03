#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - Adds a new node in the end.
 *
 * @head: the list to which it will be added.
 * @str: the value of str
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;
	list_t *temp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	new->str = strdup(str);
	new->len = i;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (temp->next);
}

