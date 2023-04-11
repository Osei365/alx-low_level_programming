#include <stdlib.h>
/**
 * free_grid - frees 2D array
 * @grid: 2D grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)
	return;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
