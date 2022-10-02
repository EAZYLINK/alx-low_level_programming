#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: source
 * @accept: required byte
 * Return: returns a pointer
 */

char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
return (s);
}
s++;
}
return ('\0');
}
