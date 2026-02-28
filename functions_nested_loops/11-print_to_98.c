#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - main entry
 * @n: number
 * print all natural numbers from n to 98
 * followed by new line
 *
 * Return: 0
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	_putchar('\n');
}
