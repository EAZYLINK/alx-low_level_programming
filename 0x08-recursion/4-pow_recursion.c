#include "main.h"

/**
 * _pow_recursion - returns the power of integer
 * @x: base number
 * @y: power
 * Return: returns the power
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y-1));
}