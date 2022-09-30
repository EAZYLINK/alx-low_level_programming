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
int i, b = 0;
if (argc >= 3)
{
for (i = 1; i < argc; i++)
b += atoi(argv[i]);
printf("%d\n", b);
return (0);
}
else if (atoi(argv[1]) == 0)
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
