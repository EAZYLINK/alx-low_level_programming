#include "lists.h"

/**
 * get_nodeint - returns nth node
 * @head: head node
 * @index: position of node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ptr = NULL;
unsigned int i = 0;
while (head != NULL)
{
if (i <= index)
{
if (i == index)
{
ptr = head;
break;
}
head = head->next;
i++;
}
else
return (NULL);
}
return (ptr);
}
