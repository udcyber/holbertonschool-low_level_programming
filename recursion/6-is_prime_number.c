#include "main.h"

int _is_it_prime(int n, int var)
{
	if (n % var == 0)
	{
		return (0);
	}

	if (var == n - 1)
	{
		return (1);
	}

	return (_is_it_prime(n, var + 1));
}



/**
 * is_prime_number - check if is prime number
 * @n: number
 */

int is_prime_number(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n == 1)
	{
		return (0);
	}

	if (n < 0)
	{
		return (0);
	}

	return (_is_it_prime(n, 2));
}
