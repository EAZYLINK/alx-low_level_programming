#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: head node
 * @index: of node to be deleted
 * Return: integer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *old_node = NULL;
listint_t *prev_node = NULL;
unsigned int i = 0, list_len = listint_len(*head);
if ((index > list_len) || (list_len == 0))
return (-1);
while (head != NULL)
{
if (i == index)
{
old_node = *head;
if (i == 0)
{
*head = old_node->next;
free(old_node);
return (1);
}
prev_node->next = old_node->next;
free(old_node);
return (1);
}
else if ((i + 1) == index)
prev_node = *head;
head = &((*head)->next);
i++;
}
return (-1);
}

/**
 * listint_len - finds the length of list
 * @h: pointer to values
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
const listint_t *ptr = h;
size_t len = 0;
while (ptr != NULL)
{
len += 1;
ptr = ptr->next;
}
return (len);
}
