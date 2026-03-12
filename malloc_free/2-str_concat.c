#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string 1 to append
 * @s2: string 2 to append
 * returned pointer should point to
 * newly allocated space in memory
 * which contains
 * the contents of s1, followed by
 * the contents of s2,
 * and null terminated
 * if NULL is passed, treat is as an empty string
 *
 * Return: pointer to new string, NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c;
	char *str;

	a = b = 0;

	if (s1 != NULL)
	{
		for (a = 0; s1[a] != '\0'; a++)
		{
			;
		}
	}

	if (s2 != NULL)
	{
		for (b = 0; s2[b] != '\0'; b++)
		{
			;
		}
	}

	str = malloc(sizeof(char) * (a + b + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	c = 0;
	while (c < (a + b))
	{
		if (c < a)
		{
			str[c] = s1[c];
		}
		else
		{
			str[c] = s2[c - a];
		}
		c++;
	}
	str[c] = 0;

	return (str);
}
