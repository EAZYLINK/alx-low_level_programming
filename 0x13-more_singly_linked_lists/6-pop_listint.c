#include "lists.h"

/**
 * pop_listint - deletes and returns the head of node of a list
 * @head: head node
 * Return: integer
 */

int pop_listint(listint_t **head)
{
listint_t *popped;
int value;
if (*head == NULL)
return (0);
popped = i*head;
value = popped->n;
free(popped);
*head = (*head)->next;
return (value);
}
