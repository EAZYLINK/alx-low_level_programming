#include "main.h"

/**
 * _memcpy - copies n bytes of address
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
