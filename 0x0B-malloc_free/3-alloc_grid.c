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
p = malloc(height * sizeof(int *));
if (p == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
p[i] = malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (i--; i >= 0; i--)
free(p[i]);
free(p);
return (NULL);
}
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
p[i][j] = 0;
return (p);
}