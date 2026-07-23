#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: variable
 * @n: number of elements of array to be printed
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int xh;

	for (xh = 0; xh < n; xh++)
	{
		if (xh < n - 1)
		{
			printf("%d, ", a[xh]);
		}
		else
		{
			printf("%d", a[xh]);
		}
	}
	printf("\n");
}
