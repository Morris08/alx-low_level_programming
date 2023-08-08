#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - allocates
 * @width: width size
 * @height: height size
 * Return: grid or NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width < 1)
	return (NULL);
	if (height < 1)
	return (NULL);
	grid = malloc(height * sizeof(int));
	if (grid == NULL)
	return (NULL);
	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
	while (--i >= 0)
	free(grid[i]);
	free(grid);
	return (NULL);
	}
	}
	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	grid[i][j] = 0;
	}
	return (grid);
}
