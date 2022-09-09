#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0 (success)
 */

int main(void)
{
int num = 48;
while (num < 58)
{
putchar(num);
if (num != 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
