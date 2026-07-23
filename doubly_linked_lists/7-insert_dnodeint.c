#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: head
 * @idx: index
 * @n: integer
 * Return:	address of new node
 *			NULL if failed or not if possible to add new node at idx
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *old_n;
	unsigned int x;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	old_n = *h;

	for (x = 0; old_n != NULL && x < idx; x++)
		old_n = old_n->next;

	if (old_n == NULL && x == idx)
		return (add_dnodeint_end(h, n));

	else if (old_n != NULL)
	{
		new_n = malloc(sizeof(dlistint_t));

		if (new_n == NULL)
			return (NULL);

		new_n->n = n;
		old_n->prev->next = new_n;
		new_n->prev = old_n->prev;
		old_n->prev = new_n;
		new_n->next = old_n;

		return (new_n);
	}

	return (NULL);
}
