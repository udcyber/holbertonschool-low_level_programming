#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * and initialize with a specific char
 * @size: size of an array of char
 * @c: initialize with this
 *
 * Return: NULL if size=0, pointer to array or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int xuan;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (xuan = 0; xuan < size; xuan++)
	{
		arr[xuan] = c;
	}
	return (arr);
}
