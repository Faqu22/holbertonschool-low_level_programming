#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * list_len - Give the number of linkes associeted.
 *
 * @h: is an Structure.
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
