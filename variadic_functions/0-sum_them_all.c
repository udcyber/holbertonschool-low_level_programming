#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of arguments
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int x;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(list, unsigned int);
	}
	va_end(list);

	return (sum);
}
