#include "main.h"

/**
 * main - entry point
 * print alphabet
 * in lowercase
 * followed by new line
 * Return: void
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar (c);
	}
	_putchar ('\n');
}
