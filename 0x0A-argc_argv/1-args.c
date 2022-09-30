#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of argument
 * Return: always 0
 */

int main(int argc, char *argv[])
{
argv[argc] = 0;
printf("%d\n", argc - 1);
return (0);
}
