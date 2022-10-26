#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: head node
 * @idx: index
 * @n: value to be inserted
 * Return: list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = NULL;
listint_t *prev_node = NULL;
unsigned int i = 0;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL || idx > listint_len(*head))
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
while (head != NULL)
{
if (i == idx)
{
if (i == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
new_node->next = prev_node->next;
prev_node->next = new_node;
return (new_node);
}
else if ((i + 1) == idx)
prev_node = *head;
head = &((*head)->next);
i++;
}
return (NULL);
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
