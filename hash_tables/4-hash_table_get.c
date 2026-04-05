#include "hash_tables.h"

/**
 * hash_table_get - retrieve value associated with key
 * @ht: hash table
 * @key:key
 * Return: value associated with the elmt, or NULL if key can't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *x;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	x = ht->array[idx];

	for (; x != NLL; x = x->next)
	{
		if (strcmp(x->key, key) == 0)
			return (x->value);
	}
	return (NULL);
}
