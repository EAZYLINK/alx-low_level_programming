#include "main.h"

/**
 * free_grid - frees a two dimensional array
 * @grid: given 2 d array
 * @height: height of array
 * Return: returns void
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
