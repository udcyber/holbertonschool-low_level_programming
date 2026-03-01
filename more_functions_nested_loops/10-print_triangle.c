#include "main.h"

/**
 * print_triangle - entry point
 * print triangle
 * followed by a new line
 * @size: size of triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = a + 1; b < size; b++)
		{
			_putchar(' ');
		}
		for (c = b - a; c <= size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
