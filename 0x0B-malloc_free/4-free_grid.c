#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2D arrays
 * @grid: pointer
 * @height: size
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	free(grid[i]);
	free(grid);
}
