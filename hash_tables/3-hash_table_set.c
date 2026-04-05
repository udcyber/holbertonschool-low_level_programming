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

	new_ht = mkn(key, value);
	if (new_ht == NULL)
	{
		return (0);
	}

	new_ht->next = ht->array[x];
	ht->array[x] = new_ht;

	return (1);
}

/**
 * mkn - maken new node
 * @key: key
 * @value: value of key
 * Return: new node or NULL
 */
hash_node_t *mkn(const char *key, const char *value);
{
	hash_node_t *new_n;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
	{
		return (NULL);
	}

	new_n = malloc(sizeof(hash_node_t));

	if (new_n == NULL)
		return (NULL);

	new_n->key = strdup(key);

	if (new_n->key == NULL)
	{
		free(new_n);
		return (NULL);
	}
	new_n->value = strdup(value);

	if (new_n->value == NULL)
	{
		free(new_n->key);
		free(new_n);

		return (NULL);
	}

	new_n->next = NULL;

	return (new_n);
}
