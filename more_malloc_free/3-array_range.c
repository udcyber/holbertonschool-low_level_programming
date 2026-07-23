#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @max: maximum value in array
 * @min: mininimum value in array
 *
 * Return: pointer to array or NULL
 */

int *array_range(int min, int max)
{
	int xh;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == 0)
	{
		return (NULL);
	}
	for (xh = 0; min <= max; min++, xh++)
	{
		ptr[xh] = min;
	}
	return (ptr);
}
