#include "main.h"

/**
 * _sqrt - compare variables
 * @var: variable to compare
 * @n: number to test
 */
int _sqrt(int n, int var)
 {
	if (var * var == n)
		return (var);

	if (var * var < n)
		return (_sqrt(n, var + 1));

	return (-1);
 }



/**
 * __sqrt_recursion - return square root
 * @n: number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	if (n < 1)
		return (-1);

	return (_sqrt(n, 2));
}
