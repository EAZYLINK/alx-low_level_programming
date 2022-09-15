#include "main.h"

/**
 * _isdigit - checks if digit 0 to 9 is entered
 * @c: parameter to be tested
 * Return: returns 1 if digit and 0 if not
 */

int _isdigit(int c)
{
if ((c >= 48) && (c < 58))
{
return (1);
}
else
{
return (0);
}
}
