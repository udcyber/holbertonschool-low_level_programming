#include "main.h"

/**
 * _strlen - return length of a string
 * @s: variable to measure length
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}
	return (len);
}
