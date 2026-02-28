#include "main.h"

/**
 * print_last_digit - entry point
 * @c: print last digit of number
 *
 * Return: 0
 */

int print_last_digit(int c)
{
	int LastDigit;

	LastDigit = c % 10;
	_putchar(LastDigit);
	return (LastDigit);
}
