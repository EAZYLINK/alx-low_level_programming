#include "main.h"

/**
 * print_alphabet_10x - prints all the lowercase alphabets 10x
 */

void print_alphabet_10x(void)
{
char c = 'a';
for (int n = 0; n < 10; n++)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
