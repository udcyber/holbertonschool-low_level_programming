#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times \ should be printed
 */

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
/* prevents printing an extra newline after the very last \ */
/* without it, we get \n after every \ */
/* with it, no \n after the last \ */
			if (len == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
