#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *test;
	unsigned long int idx = 0, y = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (idx = y; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			test = ht->array[idx];
			while (test)
			{
				printf("%s'%s': '%s'", y == 0 ? "" : ",",
					test->key, test->value), y++;
				test = test->next;
			}
		}
	}
	printf("}\n");
}
