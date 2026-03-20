#include "main.h"
#include <stdlib.h>

/**
 * print_name - print a name
 * @name: the name to print
 * @f: pointer to a function that print a name
 * Return: NULL if void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return (NULL);
	}
	f(name);
}
