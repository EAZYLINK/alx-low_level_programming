#include "main.h"

/**
 * _isalpha - check parameter is alphabet
 * @c: parameter to be checked
 * Return: either 1 or 0 based on parameter
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
