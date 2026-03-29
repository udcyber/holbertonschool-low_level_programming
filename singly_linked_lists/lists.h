#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct list_t - singly linked list
 * @str: string
 * @x: : length
 * @next_n: pointer to next node
 */

typedef struct list_t
{
	char *str;
	unsigned int next_n;
	struct list_t *next_n;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
