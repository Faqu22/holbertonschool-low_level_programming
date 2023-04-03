#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - Adds a new node.
 *
 * @head: the list to which it will be added.
 * @str: the value of str
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}

