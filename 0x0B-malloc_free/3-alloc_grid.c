#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - allocate memory for a 2D array of integers
 *
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to the newly allocated grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
