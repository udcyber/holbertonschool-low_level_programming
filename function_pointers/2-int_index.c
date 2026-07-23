#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: the array
 * @cmp: pointer to the function to be used to compare values
 * @size: the number of elements in the array
 * Return:	-1 if no element matches
 *			-1 if size <= 0
 *			or
 *			index of the first element for which the cmp
 *			function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}
	return (-1);
}
