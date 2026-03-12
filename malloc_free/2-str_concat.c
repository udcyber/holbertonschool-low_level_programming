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
	int x, y, z;
	char *str;

	x = y = 0;

	if (s1 != NULL)
	{
		for (x = 0; s1[x] != '\0'; x++)
		{
			;
		}
	}

	if (s2 != NULL)
	{
		for (y = 0; s2[y] != '\0'; y++)
		{
			;
		}
	}

	str = malloc(sizeof(char) * (x + y + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	z = 0;

	while (z < (x + y))
	{
		if (z < x)
		{
			str[z] = s1[z];
		}
		else
		{
			str[z] = s2[z - x];
		}
		z++;
	}

	return (str);
}
