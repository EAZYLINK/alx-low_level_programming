#include "main.h"

/**
 * create_array - creates an array and initializes it with char c
 * @size: unsigned integer
 * @c: character
 * Return: returns a character
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;
if (size == 0)
return (NULL);
p = malloc(size * sizeof(char));
for (i = 0; i < size; i++)
{
if (p == NULL)
return (NULL);
p[i] = c;
}
return (p);
free(p);
}
