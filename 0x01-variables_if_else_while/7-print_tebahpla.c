#include <stdio.h>

/**
 *main - Entry point
 *Return: always 0 (success)
 */

int main(void)
{
char alphabet;
alphabet = 'z';
while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);
}
