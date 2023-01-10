#include "abiy.h"

/**
 * free_grid - a function that frees a 2 dimensional grid created by alloc_grid
 * @grid: a pointer ...
 * @height: height ...
 *
 * Return: nothing ...
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
