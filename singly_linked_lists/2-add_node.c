#include "lists.h"

/**
 * add_node - add a node to beginning of list_t
 * @head: head
 * @str: string to copy
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	int r;

	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}

	for (r = 0; str[r] != '\0'; r++)
	{
		;
	}
	add->str = strdup(str);

	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}
	add->len = r;
	add->next = *head;
	*head = add;
	return (*head);
}
