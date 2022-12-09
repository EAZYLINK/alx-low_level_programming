#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head node
 * @idx: given index
 * @n: number to be inserted
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
unsigned int count;
if (h == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *h;
new_node->prev = NULL;
if (new_node->next != NULL)
new_node->next->prev = new_node;
*h = new_node;
}
else
{
for (count = 0; *h != NULL && count < (idx-1); count++)
*h = (*h)->next;
if (*h == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = (*h)->next;
new_node->prev = *h;
if ((*h)->next != NULL)
(*h)->next->prev = new_node;
(*h)->next = new_node;
}
return (new_node);
}
