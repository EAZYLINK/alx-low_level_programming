#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root
 * @n: given number
 * Return: returns the square root
 */

int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
return (n);
return (_sqrt(0, n));
}

/**
 * _sqrt - main root
 * @i: an integer
 * @n: second integer
 * Return: returns root
 */

int _sqrt(int n, int i)
{
if (n > i / 2)
return (-1);
else if (n * n == i)
return (n);
return (_sqrt(n + 1, i));
}
