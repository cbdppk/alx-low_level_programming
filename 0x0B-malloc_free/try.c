#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * arry_duoble - for creating a two dimensional array
 * @height: the row representation
 * @width: the column representaion
 * Return: returns a pointer to the array
 */

int **arry_double(int height, int width)
{
	int i;
	int j;
	int *grid;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int *) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[i]);
			}
			free(grid);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
