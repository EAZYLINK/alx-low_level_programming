#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: given parameter
 * Return: returns the last digit
 */

int print_last_digit(int n)
{
int lastDigit;
if (n < 0)
{
n = -n;
lastDigit = n % 10;
}
if (lastdigit < 0)
{
lastDigit = -lastDigit;
}
_putchar(lastDigit + '0');
return (lastDigit);
}

