#include "main.h"

/**
 * _puts - prints a string
 * @str: required string
 */

void _puts(char *str)
{
while (*str)
{
_puts(*str++);
}
_putchar('\n');
}
