#include "main.h"

/**
 * _isupper - checks if upper case is entered
 * @c: parameter to be tested
 * Return: returns 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{

int c;
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
