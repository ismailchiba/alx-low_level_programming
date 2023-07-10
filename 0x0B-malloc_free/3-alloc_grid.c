#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create 2D array
 * @width: firt input
 * @height: second input
 * Return: pointer to 2 dim. array ,NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	*grid = malloc(sizeof(*grid) * height);
	if (grid == NULL)
		return NULL;
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(grid) * width);
		if (grid[i] == NULL)
		{
			for (;i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	i = 0;
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
	free(grid);
}
