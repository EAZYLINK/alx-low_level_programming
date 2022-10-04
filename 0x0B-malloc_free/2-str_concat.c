#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
int i, j;
char *p;
for (i = 0; s1[i] != '\0'; i++)
{}
for (j = 0; s2[j] != '\n'; j++)
{}
p = malloc((i + j + 2) * sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
{
p[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
p[i + j] = s2[j];
}
return (p);
}
