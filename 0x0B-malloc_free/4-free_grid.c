#include "main.h"

/**
 * free_grid - frees a 2D grid previousy created by
 * my alloc_grid function
 *
 * @grid: The@D arry to be freed
 * @height: height of the array
 *
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; ++j)
		free(grid[j]);
	free(grid);
}
