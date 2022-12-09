#include "lists.h"
/**
 * dlistint_len - prints the number of elements of a distint list
 * @h: head of node
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
if (h == NULL)
return (count);
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
count += 1;
h = h->next;
}
return (count);
}
