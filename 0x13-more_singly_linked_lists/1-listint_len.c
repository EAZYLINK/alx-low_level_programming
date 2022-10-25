#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: pointer
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;
const listint_t *head;
head = h;
while (head != NULL)
{
head = head->next;
i++;
}
return (i);
}
