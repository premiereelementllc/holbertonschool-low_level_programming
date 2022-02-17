#include "main.h"

/**
 * allo_grid- returns a pointer to a 2 dimensional array of integers
 * @width: the width
 * @height: the height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (!grid)
		return (NULL);

	for (i = 0, i < height; i++;)
	{
		grid[i] = malloc(sizeof(int) * width); 

		if (grid[i] == NULL)
		{
			for (i = 0; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
