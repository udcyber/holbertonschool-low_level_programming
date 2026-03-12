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

	arr = malloc(sizeof(*str) * size);

	x = 0;

	while (str[x] != '\0')
	{
		size++;
		x++;
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	x = 0;

	while (str[x] != '\0')
	{
		arr[x] = str[x];
		x++;
	}
	return (arr);
}
