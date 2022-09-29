#include "main.h"

/**
 * is_palindrome -checks for palindrom number
 * @s: string to be checked
 * Return: returns true if number is palindrom
 */

int is_palindrome(char *s)
{
int index = 0;
int len = _strlen(s);
if (!(*s))
return (1);
return (check_palindrome(s, len, index));
}

/**
 * _strlen - returns the length of string
 * @s: the given string
 * Return: length of the string
 */

int _strlen(char *s)
{
int len = 0;
if (*(s+len))
{
len++;
len += _strlen(s + len);
}
return (len);
}

/**
 * check_palindrome - checks if palindrome number is entered
 * @s: the given string
 * @len: the length of string
 * @index: index of string
 * Return: returns -1 if palindrome and 0 otherwise
 */

int check_palindrome(char *s, int len, int index)
{
if (s[index] == s[len / 2])
return (1);
if (s[index] == s[len - index - 1])
return (check_palindrome(s, len, index + 1));
return (0);
}
