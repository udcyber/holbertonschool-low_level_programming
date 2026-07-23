#include "lists.h"

/**
 * dlistint_len - return the number of elements in a linked dlistint_t list.
 * @h: head
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}

	return (x);
}
