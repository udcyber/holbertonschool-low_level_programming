#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * @n: size
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, c, d;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}
	if (n > len2)
	{
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
	{
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	}
	if (ptr == 0)
		return (NULL);

	for (c = 0; c < len1; c++)
	{
		ptr[c] = s1[c];
	}
	for (d = 0; d < n && d < len2; d++, c++)
	{
		ptr[c] = s2[d];
	}
	ptr[c] = '\0';
	return (ptr);
}
