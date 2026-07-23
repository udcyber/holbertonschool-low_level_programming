#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: scan this string
 * @c: search this character
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int find;

	for (find = 0; s[find] != '\0'; find++)
	{
		if (s[find] == c)
		{
			return (s + find);
		}
	}
	if (s[find] == c)
	{
		return (s + find);
	}
	return (0);
}
