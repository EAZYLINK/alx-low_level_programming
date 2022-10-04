#include "main.h"

/**
 * _strdup - returns poiter to new array
 * @str: given string
 * Return: pointer to new array
 */

char *_strdup(char *str)
{
int count;
int i;
char *p;
if (str == NULL)
return (NULL);
for (count = 0; str[count] != '\0'; count++)
{}
p = malloc((count + 1) * sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; i <= count + 1; i++)
{
p[i] = str[i];
}
return (p);
}
