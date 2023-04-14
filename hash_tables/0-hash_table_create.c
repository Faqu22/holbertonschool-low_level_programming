#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - Create a hash table.
 *
 * @size: size of array.
 * Return: Returns a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);

	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
