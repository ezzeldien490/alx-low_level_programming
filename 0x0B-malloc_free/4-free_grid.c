#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created.
 *
 * @grid: array for free.
 * @height: height of arraty.
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
