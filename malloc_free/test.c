#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int **grid;
	int r, c, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
		{
			grid[r][c] = 0;
		}
	}
	return (grid);
}
