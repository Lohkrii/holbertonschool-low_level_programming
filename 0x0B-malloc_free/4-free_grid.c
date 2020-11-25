#include "holberton.h"

/**
 * free_grid - Frees a 2 dimensional grid.
 * @grid: The grid to free.
 * @height: Height variable of the grid.
 */

void free_grid(int **grid, int height)
{
	int idx;

	for (idx = 0; idx < height; idx++)
	{
		free(grid[idx]);
	}
	free(grid);
}
