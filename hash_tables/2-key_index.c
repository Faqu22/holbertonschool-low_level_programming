#include "hash_tables.h"

/**
 * key_index - This function that gives you the index of a key.
 *
 * @key: the string/key.
 * @size: the size of the array of the hash table
 * Return: the index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = hash_djb2(key);

	return (i % size);
}
