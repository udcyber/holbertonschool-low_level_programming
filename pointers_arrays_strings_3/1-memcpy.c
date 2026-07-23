#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination
 * @src: source
 * @n: bytes copied to memory area
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int jia;

	jia = 0;

	while (jia < n)
	{
		*(dest + jia) = *(src + jia);
		jia++;
	}
	return (dest);
}
