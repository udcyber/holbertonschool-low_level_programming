#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head
 * @n: integer
 * Return:	address of new element
 *			NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n, *old_n;

	if (head == NULL)
	{
		return (NULL);
	}

	new_n = malloc(sizeof(dlistint_t));

	if (new_n == NULL)
	{
		return (NULL);
	}

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}
	old_n = *head;

	for (; old_n->next != NULL;)
	{
		old_n = old_n->next;
	}
	old_n->next = new_n;
	new_n->prev = old_n;

	return (new_n);
}
