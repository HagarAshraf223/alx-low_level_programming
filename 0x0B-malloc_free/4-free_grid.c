#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimentional grid tly created by your alloc_grid
 * @grid: takes in width of grid
 * @height: height of grid
 * Return: free grid
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i  < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
