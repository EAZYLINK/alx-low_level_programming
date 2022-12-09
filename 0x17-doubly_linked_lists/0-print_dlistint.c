#include "lists.h"
/**
 * print_distint - prints all the elements of a distint list
 * @h: head of node
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
int count = 0;
if (h == NULL)
return (count);
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
printf("%d\n", h->n);
count += 1;
h = h->next;
}
return (count);
}
