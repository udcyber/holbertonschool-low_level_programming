#include "lists.h"

/**
 * print_list - print a list
 * @h: head
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->x, h->str);
			h = h->next_n;
			x++;
		}
		return (x);
	}
}
