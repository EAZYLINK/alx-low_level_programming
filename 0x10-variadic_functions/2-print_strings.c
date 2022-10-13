#include "variadic_functions.h"

/**
 * print_strings - prints string
 * @separator: separates string
 * @n: number of strings to be printed
 * Return: returns void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list app;
unsigned int i;
char *c;
va_start(app, n);
for (i = 0; i < n; i++)
{
c = va_arg(app, char *);
if (c == NULL)
printf("(nil)");
else
printf("%s", c);
if (i != (n-1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(app);
}
