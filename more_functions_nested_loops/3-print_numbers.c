#include "main.h"

/**
 * print_numbers - entry point
 * print 0 to 9
 * followed by new line
 * @a = variable
 * Return: 0
 */

void print_numbers(void)
{
	int a;

	a = 0;

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
