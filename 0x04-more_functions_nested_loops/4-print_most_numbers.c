#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 * Return: Always zero
 */

void print_most_numbers(void)
{
int n = 48;
while ((n < 58) && (n != (2 || 4)))
{
_putchar(n);
n++;
}
_putchar('\n');
}
