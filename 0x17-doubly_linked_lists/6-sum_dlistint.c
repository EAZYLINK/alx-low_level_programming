#include "lists.h"

/**
 * sum_dlistint - adds all the data(n) of a dlistint_t
 * @head: head node
 * Return: sum of all the data (n) of a dlistint_t or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
