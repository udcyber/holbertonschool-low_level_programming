#include "lists.h"

/**
 * free_list - free
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *free_;

	while (head != NULL)
	{
		free_ = head;
		head = head->next;
		free(free_->str);
		free(free_);
	}
	head = NULL;
}
