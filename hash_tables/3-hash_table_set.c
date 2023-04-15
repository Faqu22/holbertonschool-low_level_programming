#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_set - set a hash table.
 *
 * @ht: ht is the hash table you want to add or update the key/value to.
 * @key: key is the key.
 * @value: value is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	struct hash_node_s *k = NULL;

	if (!*key)
		return (0);

	k = malloc(sizeof(hash_node_t));
	if (k == NULL)
		return (0);

	k->key = (char *)key;
	k->value = (char *)value;
	ht->array = (hash_node_t **)k;
	return (1);
}
