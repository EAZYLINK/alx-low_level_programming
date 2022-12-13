#include "main.h"

/**
 * _isupper - checks if upper case is entered
 * @c: parameter to be tested
 * Return: returns 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}

/**
 * _atoi - function to convert string to integer
 * @s: parameter
 * Return: returns integer
 */

int _atoi(char *s)
{
unsigned int count = 0, size = 0, j = 0, k = 1, m = 1, i;
while (*(s + count) != '\0')
{
if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
break;
if (*(s + count) == '-')
	k *= -1;
if ((*(s + count) >= '0') && (*(s + count) <= '9'))
{
if (size > 0)
m *= 10;
size++;
}
count++;
}
for (i = count - size; i < count; i++)
{
j = j + ((*(s + i) - 48) * m);
m /= 10;
}
return (j *k);
}

/**
 * _strcpy - copies string
 * @dest: first parameter
 * @src: second parameter
 * Return: returns dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; *(src + i) != '\0'; i++)
{
dest[i] = *(src + i);
}
dest[i] = '\0';
return (dest);
}

/**
 * _strlen - function that returns the length of a string
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

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: returns the concatenated string
 */

char *_strcat(char *dest, char *src)
{
char *start = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
