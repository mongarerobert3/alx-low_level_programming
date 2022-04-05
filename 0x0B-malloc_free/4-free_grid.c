#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *free_grid - frees a 2 dimensional grid
 *previously created by mour alloc_grid function
 *@grid: ppointer to 2d array
 *@height: height of array
 */

void free_grid(int **grid, int hesight)
{
	int i;
	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
			free(grid[i]);

			free(grid);
			}
