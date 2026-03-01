#include "main.h"

/**
 * print_most_numbers - entry point
 * print 0 to 9
 * wihtout 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int a;

	a = 0;

	while (a >= 0 && a <= 9)
	{
		if (a != 2 && a != 4)
		{
		_putchar(a + '0');
		}
	a++;
	}
	_putchar('\n');
}
