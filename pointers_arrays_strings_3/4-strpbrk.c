#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: scan this
 * @accept: want this part of string
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int yi, er;

	for (yi = 0; s[yi] != '\0'; yi++)
	{
		for (er = 0; accept[er] != '\0'; er++)
		{
			if (s[yi] == accept[er])
				return (s + yi);
		}
	}
	return (0);
}
