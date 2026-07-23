#include "main.h"

/**
 * _abs - computes absolue value of an integer
 * @x: initializes integer values
 *
 * Return: 0
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	return (x);
}
