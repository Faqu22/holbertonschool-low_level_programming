#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
/**
 * hash_table_get - that retrieves a value associated with a key.
 *
 * @ht: hash table.
 * @key: is the key.
 * Return: Returns the value associated, or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *mem = NULL;
	unsigned long int k = key_index((const unsigned char *)key, ht->size);

	if (!ht || ht->array[k] == NULL)
		return (NULL);
	mem = ht->array[k];
	if (mem->key != NULL)
		if (mem->key != key)
			return ((char *)mem->value);
	return (NULL);
}
