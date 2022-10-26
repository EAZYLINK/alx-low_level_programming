#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: pointer to head node
 * @n: value to be added
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *ptr = *head;
new = malloc(sizeof(listint_t));
if (new != NULL)
{
new->n = n;
new->next = NULL;
}
else
return (NULL);
if (ptr != NULL)
{
while (ptr->next != NULL)
ptr = ptr->next;
ptr->next = new;
}
else
*head = new;
return (new);
}
