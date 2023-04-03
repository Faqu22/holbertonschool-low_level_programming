#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - print all the elements of list.
 *
 * @h: an list.
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		if (h->n)
			printf("%i", h->n);
		else
			printf("%i", 0);
		printf("\n");
		h = h->next;
		j++;
	}
	return (j);
}
