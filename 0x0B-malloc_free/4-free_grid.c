#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  a function that frees a 2 dimensional grid.
 * @grid: the 2 dimensional array.
 * @height: rows.
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
