/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 *
 * @grid: the grid to free
 * @height: the height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
 		free(grid[i]);
	}

	free(grid);
}
