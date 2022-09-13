#include "main.h"

/**
 * print_alphabet_10x - prints all the lowercase alphabets 10x
 */

void print_alphabet_x10(void)
{
int n = 0;
char c = 'a';
while (n < 10)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
n++;
}
}
