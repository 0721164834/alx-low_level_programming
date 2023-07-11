#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: dimension 1
 * @height: dimesion 2
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	/*Free each row in the grid*/
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	/*Free the grid itself*/
	free(grid);
}
