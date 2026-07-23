#include "main.h"

/**
 * _strncpy - copy a string
 * @src: source
 * @dest: destination
 * @n: byte number
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	for (; x < n; x++)
	{
		dest[x] = '\0';
	}

	return (dest);
}
