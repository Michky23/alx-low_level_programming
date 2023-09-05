#include "main.h"

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the number of column
 * @height: the number of row
 * Return: NULL on failure or NULL on sucess
 */

int **alloc_grid(int width, int height)

{
	int **gridout;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);

	gridout = malloc(sizeof(int *) * height);

	if (gridout == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		gridout[a] = malloc(sizeof(int) * width);

		if (gridout[a] == NULL)
		{
			free(gridout);
			for (b = 0; b <= height; b++)
				free(gridout[b]);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			gridout[a][b] = 0;
	}
	return (gridout);

}
