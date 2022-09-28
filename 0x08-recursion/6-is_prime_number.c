#include "main.h"

/**
 * is_prime_number - checks if prime number
 * @n: integer
 * Return: returns 1 for prime number
 */

int is_prime_number(int n)
{
int start = n / 2;
if (n <= 1)
return (0);
return (is_prime(n, start));
}

/**
 * is_prime - checks for prime number
 * @n: integer to be checked
 * @sart: where to start checking from
 * Return: returns 1 if prime and 0 otherwise
 */
int is_prime(int n, int start)
{
if (start <= 1)
return (1);
else if (n % start == 0)
return (0);
return (is_prime(n, start - 1));
}