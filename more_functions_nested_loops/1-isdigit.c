#include "main.h"

/**
 * _isdigit - entry point
 * check for digit 0 through 9
 * @c: variable
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	_putchar(c);
	_putchar(':');
	_putchar(' ');

	if (_isdigit(c))
	{
		_putchar(1);
		_putchar('\n');
		return (1);
	}
	else
	{
		_putchar(0);
		_putchar('\n');
		return (0);
	}
}
