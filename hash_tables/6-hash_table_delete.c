#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *here = NULL;
	unsigned long int idx = 0;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			while (ht->array[idx])
			{
				here = ht->array[idx];
				free(here->key);
				free(here->value);
				ht->array[idx] = ht->array[idx]->next;
				free(here);
			}
		}
		free(ht->array);
		free(ht);
	}
}
