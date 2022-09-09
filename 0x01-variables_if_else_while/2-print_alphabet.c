#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *Return: always 0 (success)
 */

int main(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
putchar("%c ", alphabet);
alphabet + +;
}
return (0);
}
