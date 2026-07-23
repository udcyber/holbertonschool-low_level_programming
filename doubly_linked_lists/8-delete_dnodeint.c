#include "lists.h"

/**
 * delete_dnodeint_at_index -	delete the node at index index of a
 *								dlistint_t linked list
 * @head: head
 * @index: index
 * Return: 1 if success, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *old_n;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		old_n = *head;
		*head = old_n->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(old_n);

		return (1);
	}

	old_n = *head;

	for (x = 0; old_n != NULL && x < index; x++)
		old_n = old_n->next;
	if (old_n == NULL)
		return (-1);
	old_n->prev->next = old_n->next;

	if (old_n == NULL)
		return (-1);
	old_n->prev->next = old_n->next;

	if (old_n->next != NULL)
	{
		old_n->next->prev = old_n->prev;
	}
	free(old_n);

	return (1);
}
