#include "lists.h"

/**
 * print_list - print a list
 * @h: head
 */

size_t print_list(const list_t *h)
{
	size_t b = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			b++;
		}
	}
	return (b);
}
