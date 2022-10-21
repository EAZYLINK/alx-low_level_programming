#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: pointer to nodes
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
const list_t *tmp;
unsigned int i;
tmp = h;
if (tmp->str == NULL)
printf("[0] (nil)\n");
for (i = 0; tmp; i++)
{
printf("[%u] %s\n", tmp->len, tmp->str);
tmp = tmp->next;
}
return (i);
}
