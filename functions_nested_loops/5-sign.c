#include "main.h"

/**
 * print_sign - entry point
 * @n: print sign of a number
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		print_sign('+');
		return (1);
	}
	if (n == 0)
	{
		print_sign('0');
		return (0);
	}
	if (n < 0)
	{
		print_sign('-');
		return (-1);
	}
	return (0);
}
