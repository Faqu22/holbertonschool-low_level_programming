#include "lists.h"

/**
 * free_dlistint - free a list.
 *
 * @head: list a free.
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    dlistint_t *temp;

    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
}
