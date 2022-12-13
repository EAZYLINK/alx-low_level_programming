#include "main.h"

/**
 * _memcpy - copies n bytes of address
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}

/**
 * _strchr - locates a character in a string
 * @s: given string
 * @c: required character
 * Return: returns c if found or NULL if not
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
{}
if (s[i] == c)
return (s + i);
else
return (NULL);
}

/**
 * _strspn - gets the length of a prefixed string
 * @s: given string
 * @accept: prefixed string
 * Return: returns number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
{
bytes++;
break;
}
else if (accept[i + 1] == '\0')
return (bytes);
}
s++;
}
return (bytes);
}


/**
 * _strpbrk - searches a string for a set of bytes
 * @s: source
 * @accept: required byte
 * Return: returns a pointer
 */

char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
return (s);
}
s++;
}
return ('\0');
}

/**
 * _strstr - prints substring
 * @haystack: main string
 * @needle: substring
 * Return: returns pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == 0)
return (haystack);
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
return (haystack);
i++;
} while (haystack[i] == needle[i]);
}
haystack++;
}
return ('\0');
}
