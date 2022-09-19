#include "main.h"

/**
 * _strcpy - copies string
 * @dest: first parameter
 * @src: second parameter
 * Return: returns dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; *(src + 1) != '\0'; i++)
{
dest[i] = *(src + i);
}
dest[i] = '\0';
return (dest);
}