#include "main.h"

/**
 * print_line - print a line
 * print a line
 * with underscore
 * if n equals zero
 * only print a new line
 * @n: variable
 *
 * Return: 0
 */

void print_line(int n)
{
	int r;

	r = 0;

	if (n > 0)
	{
		while (r < n)
		{
			_putchar('_');
			r++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
