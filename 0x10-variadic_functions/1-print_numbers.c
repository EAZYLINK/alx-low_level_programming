#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separates numbers
 * @n: number to be printed
 * Return: returns void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list app;
unsigned int i;
va_start(app, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(app, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(app);
}
