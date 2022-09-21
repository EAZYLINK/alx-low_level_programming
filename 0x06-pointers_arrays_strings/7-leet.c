#include "main.h"

/**
 * leet - encode 1337 characters
 * @str: paramter
 * Return: encoded characters
 */

char *leet(char *str)
{
int n1 = 0, n2;
char leet = {'O', 'L', '?', 'E', 'A', 'T'};
while (str[++n1])
{
for (n2 = 0; n2 <= 7; n2++)
{
if (str[n1] == leet[n2] || str[n1] - 32 == leet[n2])
str[n1] = n2 + '0';
}
}
return (str);
}
