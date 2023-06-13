#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a ptr to 2D array
 * @width: int
 * @height: int
 * Return: dbl ptr
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		int a;

		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (a = 0; a < i; a++)
			{
				free(grid[a]);
			}
			free(grid);
			return (NULL);
		}
		for (a = 0; a < width; a++)
		{
			grid[i][a] = 0;
		}
	}
	return (grid);
}
