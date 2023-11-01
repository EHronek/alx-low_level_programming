#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * free_grid - frees a 2D grid previousuly created by your alloc_grid
  * @grid: memory space to free
  * @height: height of grid
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	int j = 0;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
