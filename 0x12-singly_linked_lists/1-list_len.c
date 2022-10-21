#include "lists.h"

/**
 * list_len - shows the number of elements in a list
 * @h: list
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
const list_t *tmp;
unsigned int count = 0;
tmp = h;
while (tmp)
{
tmp = tmp->next;
count++;
}
return (count);
}
