#include "main.h"

/**
 * more_numbers - entry point
 * print 10 times the numbers
 * from 0 to 14
 * followed by a new line
 *
 * Return: 0
 */

void more_numbers(void)
{
	int a, b;

	a = 0;
	b = 0;

	while (b >= 0 && b <= 10)
	{
		while (a >= 0 && a <= 14)
		{
			_putchar(a + '0');
			a++;
		}
		_putchar('\n');
		b++;
	}
}

