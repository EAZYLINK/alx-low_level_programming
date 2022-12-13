#include "main.h"

/**
 * _abs - prints the absolute value of an int
 * @n: integer parameter
 * Return: always positive
 */

int _abs(int n)
{
if (n < 0)
{
n = n * -1;
return (n);
}
else
{
return (n);
}
}

/**
 * _islower - checks if character is lower case
 * @c: parameter to be checked
 * Return: either 1 or 0 based  on output
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

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

/**
 * _isdigit - checks if digit 0 to 9 is entered
 * @c: parameter to be tested
 * Return: returns 1 if digit and 0 if not
 */

int _isdigit(int c)
{
if ((c >= 48) && (c < 58))
return (1);

return (0);
}
