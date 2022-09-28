#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: given integer
 * Return: returns factorial
 */

int factorial(int n)
{
if (n == 0 || n == 1)
return (1);
return (n * factorial(n - 1));
}
