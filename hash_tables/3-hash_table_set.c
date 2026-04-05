#include "hash_tables.h"

/**
 * hash_table_set - add an element to hash table
 * @ht: hash table want to add
 * @key: key
 * @value: value associated with key
 * Return: 1 if success, 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_ht = NULL;
	hash_node_t *here = NULL;
	unsigned long int x;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);

	x = key_index((unsigned char *)key, ht->size);
	here = ht->array[x];

	for (; here != NULL; here = here->next)
	{
		if (strcmp(here->key, key) == 0)
		{
			if (strcmp(here->value, value) != 0)
			{
				free(here->value);
				here->value = strdup(value);
			}
		return (1);
		}
	}

	new_ht = _node(key, value);
	if (new_ht == NULL)
	{
		return (0);
	}

	new_ht->next = ht->array[x];
	ht->array[x] = new_ht;

	return (1);
}
