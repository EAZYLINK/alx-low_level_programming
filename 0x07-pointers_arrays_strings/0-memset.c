#include "main.h"

/**
 * _memset - sets the memory with byte b
 * @s: destination
 * @b: required byte
 * @n: integer
 * Return: returns pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
