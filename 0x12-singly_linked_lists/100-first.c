#include <stdio.h>
void __attribute__((constructor)) printBeforeMain(void);

/**
 * printBeforeMain - prints a string before main function is executed
 * Return: void
 */

void printBeforeMain(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
