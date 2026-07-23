#include "main.h"

/**
 * _memset - fill n bytes with memory
 * @s: pointer to start of memory
 * @b: constant byte to fill with
 * @n: num bytes to fill
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
