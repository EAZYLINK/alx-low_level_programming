#include "lists.h"

/**
 * pop_listint - deletes and returns the head of node of a list
 * @head: head node
 * Return: integer
 */

int pop_listint(listint_t **head)
{
listint_t *h;
listint_t *popped;
int value;
if (*head == NULL)
return (0);
popped = *head;
value = popped->n;
h = popped->next;
free(popped);
*head = h;
return (value);
}
