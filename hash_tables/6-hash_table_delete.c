#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - delete the hash table.
 *
 * @ht: hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;

	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		free(p);
	}
}
