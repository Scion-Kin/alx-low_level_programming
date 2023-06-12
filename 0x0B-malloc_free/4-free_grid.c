#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free memory occupied by grid
 * @grid: argument
 * @height: argument
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int s;

	if (grid == NULL || height <= 0)
		return;
	for (s = 0; s < height; s++)
		free(grid[s]);
	free(grid);
}
