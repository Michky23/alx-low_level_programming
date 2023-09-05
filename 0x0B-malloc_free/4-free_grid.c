#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 *
 * @grid: multidimensional array of integers
 * @height: height of the grid
 *
 * Return: (0)
 */
void free_grid(int **grid, int height)

{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
