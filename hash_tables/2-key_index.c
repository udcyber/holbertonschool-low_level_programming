#include "hash_tables.h"

/**
 * key_index - give index of key
 * @key: the key
 * @size: size of array of the hash table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
