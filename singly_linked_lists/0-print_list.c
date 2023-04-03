#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - Prints a SLL(Simply linked lists)
 *
 * @h: is an Structure.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%i] %s", h->len, h->str);
		}
		printf("\n");
		h = h->next;
		j++;
	}
	return (j);
}
