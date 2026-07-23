#include "main.h"

/**
 * _puts - print a string
 * @str: to input string
 *
 * Return: 0
 */

void _puts(char *str)
{
	int xh;

	for (xh = 0; str[xh] != '\0'; xh++)
	{
		_putchar(str[xh]);
	}
	_putchar('\n');
}
