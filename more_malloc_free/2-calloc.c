#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements in array
 * @size: size of each array
 *
 * Return: pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int a;
	void *ptr;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	mem = malloc(nmemb * size);
	ptr = mem;
	if (mem == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
	{
		mem[a] = 0;
	}
	return (ptr);
}
