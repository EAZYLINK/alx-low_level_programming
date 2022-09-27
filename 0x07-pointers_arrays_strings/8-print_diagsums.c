#include "main.h"
/**
 * print_diagsums - prints the sum of diagonals
 * @a: given matrix
 * @size: size of matrix
 * Return: returns void
 */

void print_diagsums(int *a, int size)
{
int i, j;
int sum = 0;
for (i = 0; i <= size; i++)
{
for (j = 0; j <= size; j++)
{
if (i == j || (i + j) == (size + 1))
sum += a[i][j];
else
continue;
}
}
printf("%d", sum);
}
