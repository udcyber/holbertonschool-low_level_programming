#include "main.h"

/**
 * _strcpy - copy string pointed to by src to buffer pointed to by dest
 * @dest: destination
 * @src: source
 *
 * Return: point to dest
 */

char *_strcpy(char *dest, char *src)
{
	int shu;

	shu = 0;

	while (shu >= 0)
	{
		*(dest + shu) = *(src + shu);
		if (*(src + shu) == '\0')
		{
			break;
		}
		shu++;
	}
	return (dest);
}
