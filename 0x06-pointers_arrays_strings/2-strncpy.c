#include "main.h"

/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: returns dest
 */

char *_strcpy(char *dest, char *src, int n)
{
for (n = 0; src[n] != '\0'; n++)
{
dest[n] = src[n];
}
dest[n] = '\0';
return (dest);
}
