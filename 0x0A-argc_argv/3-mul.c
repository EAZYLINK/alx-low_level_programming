#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: first argument
 * @argv: second argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
}
else
printf("Error\n");
return (1);
}
