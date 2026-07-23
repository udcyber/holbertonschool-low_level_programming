#include "lists.h"

/**
 * list_len - find length
 * @h: pointer to beginning
 */

size_t list_len(const list_t *h)
{
	size_t w = 0;

	while (h != NULL)
	{
		w++;
		h = h->next;
	}
	return (w);
}
