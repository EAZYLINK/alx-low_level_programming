#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: pointer to nodes
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
const list_t *list;
unsigned int i;
list = h;
for (i = 0; list; i++)
{
printf("[%u] %s\n", list->len, list->str);
list = list->next;
}
return (i);
}
