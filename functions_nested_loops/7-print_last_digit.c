#include "main.h"

/**
 * print_last_digit - entry point
 * @c: print last digit of number
 *
 * Return: 0
 */

int print_last_digit(int c)
{

	int last = c % 10;

	_putchar(last);

	return (last);
}
