#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * each element of the grid should be initialized to 0
 * @width: width of table
 * @height: height of table
 *
 * Return: pointer to 2D array or NULL
 */

int **alloc_grid(int width, int height)
{
	int hgt, wid, **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (hgt = 0; hgt < height; hgt++)
	{
		grid[hgt] = malloc(sizeof(int) * width);

		if (grid[hgt] == NULL)
		{
			for (; hgt >= 0; hgt--)
			{
				free(grid[hgt]);
			}
		free(grid);
		return (NULL);
		}
	}
	for (hgt = 0; hgt < height; hgt++)
	{
		for (wid = 0; wid < width; wid++)
		{
			grid[hgt][wid] = 0;
		}
	}
	return (grid);
}
