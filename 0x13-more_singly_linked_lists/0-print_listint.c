#include "lists.h"

/**
 * print_listint - prints list of integers
 * @h: pointer
 * Return: int
 */

size_t print_listint(const listint_t *h)
{
size_t i = 0;
const listint_t *head;
head = h;
while (head != NULL)
{
printf("%d\n", head->n);
head = head->next;
i++;
}
return (i);
}
