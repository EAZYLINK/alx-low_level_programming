#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all the arguments
 * @n: number of arguments
 * Return: returns argument sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list app;
int i, sum;
va_start (app, n);
sum = 0;
for (i = 0; i < n; i++)
sum += va_arg (app, int);
va_end (app);
return (sum);
}
