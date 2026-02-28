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
	if (n >= 98)
	{
		while (n > 98)
		{
		printf("%d, ", n--);
		printf("%d\n", n);
		}
	}
	else
	{
		while (n < 98)
		{
		printf("%d, ", n++);
		printf("%d\n", n);
		}
	}
}
