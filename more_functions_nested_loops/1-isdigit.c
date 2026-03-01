#include "main.h"

/**
 * _isdigit - entry point
 * check for digit 0 through 9
 * @c: variable
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
