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
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
{}
for (j = 0; s2[j]; j++)
{}
p = malloc((i + j + 1) * sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
{
p[i] = s1[i];
}
for (j = 0; s2[j]; j++)
{
p[i + j] = s2[j];
}
return (p);
free(p);
}
