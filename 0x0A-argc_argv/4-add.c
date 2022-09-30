#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 1 or 0
 */

int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d", a +b);
return (0);
}
else if (argv[1] == '\0')
{
printf("%d\n", 0);
return (0);   
}
else
{
printf("Error\n");
return (1);
}
}
