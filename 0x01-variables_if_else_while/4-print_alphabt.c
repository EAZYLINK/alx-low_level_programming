#include <stdio.h>

/**
*main - Entry point
*Return: always 0 (success)
*/

int main(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z' && alphabet != ('q' || 'e'))
{
if (alphabet != 'q' && alphabet != 'e')
{
putchar(alphabet);
}
alphabet++;
}
putchar('\n');
return (0);
}
