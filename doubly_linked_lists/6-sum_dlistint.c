#include "lists.h"

/**
 * sum_dlistint -	return the sum of all the data (n) of
 *					a dlistint_t linked list
 * @head: head
 * Return: sum_all
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_all;

	for (sum_all = 0; head != NULL; head = head->next)
	{
		sum_all = sum_all + head->n;
	}

	return (sum_all);
}
