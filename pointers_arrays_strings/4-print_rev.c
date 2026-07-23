#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: variable to move through
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int xh;

	for (xh = 0; s[xh] != '\0'; xh++)
	{
		;
	}
	for (xh -= 1; xh >= 0; xh--)
	{
		_putchar(s[xh]);
	}
	_putchar('\n');
/* 《xh -= 1》moves it back one step */
/* now xh points to the actual last character */
}
