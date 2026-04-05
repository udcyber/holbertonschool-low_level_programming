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
	unsigned long int idx = 0;
	hash_node_t *elmt = NULL, *new_n = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	idx = kidx((unsigned char *) key, ht->size);
	elmt = ht->array[idx];

	if (elmt && strcmp(key, elmt->key) == 0)
	{
		free(elmt->value);
		elmt->value = strdup(value);
		return (1);
	}

	new_n = malloc(sizeof(hash_node_t));

	if (new_n == NULL)
		return (0);

	new_n->key = strdup(key);
	new_n->value = strdup(value);
	new_n->next = ht->array[idx];
	ht->array[idx] = new_n;
	return (1);
}
