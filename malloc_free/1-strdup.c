#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * memory for the new string is obtained with
 * malloc and can be freed with free
 * if str = NULL return NULL if
 * if success return a pointer to the duplicated string
 * if insufficient memory available return NULL
 * @str: string to duplicate
 *
 * Return: success or NULL
 */

char *_strdup(char *str)
{
	char *arr;
	int x, size;

	size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size])
	{
		size++;
	}

	arr = malloc(size + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x <= size; x++)
	{
		arr[x] = str[x];
	}
	return (arr);
}
