#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: given array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
int b, i;
for (i = 0; i < n; i++)
{
b = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = b;
}
}
