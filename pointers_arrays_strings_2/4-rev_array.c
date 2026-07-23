#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @n: number of elements of the array
 * @a: array
 *
 * Return : 0
 */

void reverse_array(int *a, int n)
{
	int rev, limian;

	n = n - 1;

	limian = 0;

	while (limian <= n)
	{
		rev = a[limian];
		a[limian++] = a[n];
		a[n--] = rev;
	}
}
