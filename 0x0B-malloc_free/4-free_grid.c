#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees up allocated memory space
 * @grid: the grid
 * @height: the height
 *
 * Code by 0xOneBeing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
