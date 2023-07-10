#include "main.h"
#include <stdlib.h>

/*
 * free_grid - unction that frees a 2 dimensional grid previously created
 * @grid: 2D grid input
 * @height: height input
 * Return: NULL
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
