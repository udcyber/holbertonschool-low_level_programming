#include "main.h"

/**
 * print_line - print a line
 * print a line
 * with underscore
 * if n equals zero
 * only print a new line
 * @n: number of times underscore printed
 *
 * Return: 0
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n++;
	}
	_putchar('\n');

	while (n <= 0)
	{
	_putchar('\n');
	}
}
