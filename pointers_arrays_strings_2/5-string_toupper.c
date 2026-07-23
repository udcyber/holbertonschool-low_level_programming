#include "main.h"

/**
 * string_toupper - change lower case to uppercase in string
 * @x: the string to modify
 * Return: 0
 */

char *string_toupper(char *x)
{
	int chang;

	chang = 0;

	while (x[chang] != '\0')
	{
		if (x[chang] >= 97 && x[chang] <= 122)
		{
			x[chang] = x[chang] - 32;
		}
		chang++;
	}
	return (x);
}
