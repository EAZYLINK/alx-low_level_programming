#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end
 * @head: head node
 * @n: integer to be added
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
new_node->prev = *head;
if (*head != NULL)
(*head)->next = new_node;
*head = new_node;
return (new_node);
}
