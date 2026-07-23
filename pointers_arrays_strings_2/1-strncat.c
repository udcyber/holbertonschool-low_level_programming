#include "main.h"

/**
 * _strncat - concatenate 2 strings
 * @dest: destination
 * @src: source
 * @n: bytes to be concatenated
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int chang, j;

	chang = 0;

	while (dest[chang] != '\0')
	{
		chang++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++, chang++)
	{
		dest[chang] = src[j];
	}
	dest[chang] = '\0';
	return (dest);
}
