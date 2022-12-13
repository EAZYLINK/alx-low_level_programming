#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: returns the destination
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{}
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}

/**
 * _strncpy - copies string
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}


/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: return the difference
 */

int _strcmp(char *s1, char *s2)
{
while (*s1)
{
if (*s1 != *s2)
{
break;
}
s1++;
s2++;
}
return ((*(const unsigned char *)s1) -(*(const unsigned char *)s2));
}

/**
 * _puts - prints a string
 * @str: required string
 */

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

/**
 * _memset - sets the memory with byte b
 * @s: destination
 * @b: required byte
 * @n: integer
 * Return: returns pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
