#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees up memory
 * @grid: first arguement
 * @height: second arugement
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
