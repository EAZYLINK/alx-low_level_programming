#include "main.h"

/**
 * cap_string - capitalizes each word
 * @str: parameter
 * Return: returns the capitals of each word
 */

char *cap_string(char *str)
{
int i = 0;
while (str[++i])
{
while (!(str[i] >= 'a' && str[i] <= 'z'))
{
i++;
}
if (str[i-1] = (' ' || ',' || ';' || '.' || '?' || '"' || '(' || ')' || '{' || '}'))
{
str[i] -= 32;
}
}
return (str);
}