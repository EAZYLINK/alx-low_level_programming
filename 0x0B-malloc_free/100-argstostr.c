#include "main.h"

/**
 * argstostr - concatenates all arguments
 * @ac: argument count
 * @av: argument array
 * Return: returns concatenated argument
 */

char *argstostr(int ac, char **av)
{
char *p = NULL;
int k = 0, i = ac, j, sum = 0, temp = 0;
if (ac == 0 || av == NULL)
return (NULL);
while (ac--)
sum += (len(av[ac]) + 1);
p = (char *) malloc(sum + 1);
if (p != NULL)
{
while (k < i)
{
for (j = 0; av[k][j] != '\0'; j++)
p[j + temp] = av[k][j];
p[temp + j] = '\n';
temp += (j + 1);
k++;
}
p[temp] = '\0';
}
else
{
return (NULL);
}
return (p);
}

/**
 * len - returns length of str
 * @str: string
 * Return: returns string length
 */

int len(char *str)
{
int len = 0;
if (str != NULL)
{
while (str[len])
len++;
}
return (len);
}
