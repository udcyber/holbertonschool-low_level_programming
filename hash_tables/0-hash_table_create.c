#

/**
 * hash_table_create - create hash table
 * @size: size of hash table
 * Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;

	if (size == 0)
		return (NULL);


	new = malloc(sizeof(hash_table_t));

	if (new == NULL)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);

	if (new_ht->array == NULL)
		return (NULL);

	return (new);
}
