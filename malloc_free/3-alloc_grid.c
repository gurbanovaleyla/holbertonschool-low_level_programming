#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: width of the grid
* @height: height of the grid
*
* Return: pointer to the newly allocated 2D array,
*         or NULL if width/height <= 0 or memory allocation fails
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	unsigned int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int)height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < (unsigned int)width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
