#include "main.h"

/**
 * print_last_digit - entry point
 * @c: print last digit of number
 *
 * Return: 0
 */

int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
