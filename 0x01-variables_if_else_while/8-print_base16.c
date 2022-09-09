#include <stdio.h>

/**
 *main - Entry point
 *Return: always 0 (success)
 */

int main(void)
{
int n = 48;
char alphabet = 'a';
while (n < 58)
{
putchar(n);
n++;
}
while (alphabet <= 'f')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
