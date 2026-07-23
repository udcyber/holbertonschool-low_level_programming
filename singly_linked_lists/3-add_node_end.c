#include "lists.h"

/**
 * add_nde_end - add node at the end
 * @head: head
 * @str: string
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *this_n;
	int r;

	if (head == NULL)
	{
		return (NULL);
	}
	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = add;
	}
	else
	{
		this_n = *head;
		while (this_n->next != NULL)
		{
			this_n = this_n->next;
		}
		this_n->next = add;
	}
	add->next = NULL;
	add->str = strdup(str);

	for (r = 0; str[r] != '\0'; r++)
	{
		;
	}
	add->len = r;
	return (add);
}
