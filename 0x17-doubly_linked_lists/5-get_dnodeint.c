#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head node
 * @index: given index
 * Return: node at index or NULL if not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *req_node;
unsigned int count = 0;
req_node = head;
while (req_node != NULL)
{
if (count == index)
return (req_node);
count++;
req_node = req_node->next;
}
return (NULL);
}
