#include <stdio.h>

/**
*main - Entry point
*Return: always 0 (success)
*/

int main(void)
{
char alphabet;
char ALPHABET;
alphabet = 'a';
ALPHABET = 'A';
while (alphabet <= 'z')
{
putchar(alphabet);
}
while (ALPHABET <= 'Z')
{
putchar(ALPHABET);
}
putchar('\n');
return (0);
}
