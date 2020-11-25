#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional grid of ints.
 * @width: Width variable of the grid.
 * @height: Height variable of the grid.
 * Return: Returns address of grid.
 */
int **alloc_grid(int width, int height)
{

	int **grid;
	int idx, cidx;

	grid = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return (NULL);

	if (grid == NULL)
		return (NULL);

	for (idx = 0; idx < height; idx++)
	{
		grid[idx] = malloc(width * sizeof(int));
		if (grid[idx] == NULL)
		{
			while (idx >= 0)
			{
				free(grid[idx]);
				idx--;
			}
			free(grid);
			return (NULL);
		}
	}
	for (idx = 0; idx < height; idx++)
	{
		for (cidx = 0; cidx < width; cidx++)
		{
			grid[idx][cidx] = 0;
		}
	}

	return (grid);
}
