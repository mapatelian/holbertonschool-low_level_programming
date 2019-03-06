#include "holberton.h"

/**
 * free_grid - frees a 2D grid
 *
 * @grid: pointer to the array
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	return;

	for (i = height; i > 0; i--)
		free(grid[i]);
}
