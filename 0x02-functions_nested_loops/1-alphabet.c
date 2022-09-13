#include "main.h"

/**
 * print_alphabet - prints all the lower case alphabets
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
