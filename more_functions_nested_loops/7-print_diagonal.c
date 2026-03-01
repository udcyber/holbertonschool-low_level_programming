#include "main.h"

/**
 * print_diagonal - print diagonal line
 * print diagonal line
 * n is number of times character backslash should be printed
 * diagonal should end with new line
 * if n is zero or less, function should only print new line
 * @n: variable
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int r, w;

	r = 0;

	if (n > 0)
	{
		while (r < n)
		{
			w = 0;
			while (w <= r - 1)
			{
				_putchar(' ');
				w++;
			}
			_putchar('\\');
			_putchar('\n');
			r++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
