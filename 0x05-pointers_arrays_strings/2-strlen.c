#include "main.h"

/**
 * _strlen: function that returns the length of a string
 * @s: string
 * Return: returns the length of s
 */

int _strlen(char *s)
{
int len, count;
count = 0;
for (len = 0; s[len]; len++)
{
count++;
}
return (count);
}
