#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_ok;

	for (; head != NULL;)
	{
		free_ok = head->next;
		free(head);
		head = free_ok;
	}
}
