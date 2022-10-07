#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory to be allocated
 * Return: returns pointer to the address in the memory
 */

void *malloc_checked(unsigned int b)
{
void *block;
block = malloc(b);
if (block == NULL)
exit(98);
return (block);
}