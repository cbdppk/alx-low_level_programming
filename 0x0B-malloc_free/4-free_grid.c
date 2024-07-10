#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - for freeing a double dimentional array
 * @grid: the double dimensional arrays
 * @height : takes all the rows
 * Return: returns void
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
