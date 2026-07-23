#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int chang, j;

	chang = 0;

	while (dest[chang] != '\0')
	{
		chang++;
	}
	for (j = 0; src[j] != '\0'; j++, chang++)
	{
		dest[chang] = src[j];
	}
	dest[chang] = '\0';
	return (dest);
}