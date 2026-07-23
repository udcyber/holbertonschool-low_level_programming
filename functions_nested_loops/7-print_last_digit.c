#include "main.h"

/**
 * print_last_digit - print last digit
 * @a: taking integer value
 *
 * Return: 0
 */

int print_last_digit(int a)
{
	int b = a % 10;

	if (a < 0)
	{
		b = b * -1;
	}
	_putchar(b + '0');
	return (b);

/* 《b = b * -1》makes the last digit positive */
/* fi: -123 -> b was -3, becomes +3 */
/* 《+ '0'》converts the digit (0-9) into its ASCII character */
/* fi: b = 7 -> 7 + '0' = 55 -> prints '7' */
}
