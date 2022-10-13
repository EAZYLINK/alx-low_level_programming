#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the arguments
 * @n: number of arguments
 * Return: returns argument sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list app;
unsigned int i;
int sum;
va_start(app, n);
if (n == 0)
return (0);
sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(app, int);
va_end(app);
return (sum);
}
