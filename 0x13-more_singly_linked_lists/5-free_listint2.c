#include "lists.h"

/**
 * free_listsint2 - frees a list memory
 * @head: pointer to head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *tmp;
listint_t **ptr = head;
if (ptr != NULL)
{
while (*head != NULL)
{
tmp = *head;
free(tmp);
*head = (*head)->next;
}
*ptr = NULL;
}
}
