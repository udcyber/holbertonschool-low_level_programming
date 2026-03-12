#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * each element of the grid should be initialized to 0
 *
 * Return: pointer to 2D array of int or NULL on failure or if width or height is 0 or neg
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *))

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int *))
	}

	if (grid[i] == NULL)
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
	free(grid);
	return;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	return (grid);
	}
}
