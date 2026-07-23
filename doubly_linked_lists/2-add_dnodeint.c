#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list.
 * @head: head
 * @n: integer
 * Return:	address of new element
 *			NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

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
	new_n->next = *head;
	new_n->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_n;
	}
	*head = new_n;

	return (new_n);
}
