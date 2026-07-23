#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2D grid previously created
 * @grid: the matrix
 * @height: free with this
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
