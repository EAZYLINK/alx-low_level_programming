#include "main.h"

/**
 * alloc_grid - allocates a two dimensional array
 * @width: width of array
 * @height: height of array
 * Return: returns an integer
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **p;
if (width <= 0 || height <= 0)
return (NULL);
p = (int **)malloc(height * sizeof(int *));
if (p == NULL)
return (NULL);
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
p[i][j] = 0;
}
}
return (p);
free (p);
}