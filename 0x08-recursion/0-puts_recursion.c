#include "main.h"

/**
 * _puts_recursion - prints strings followed by a new line
 * @s: given string
 * Return: returns void
 */

void _puts_recursion(char *s)
{
int i = 0;
if (s[i] == '\0')
{
_putchar('\n');
return;
}
_putchar(s[i]);
_puts_recursion(s+1);
}
