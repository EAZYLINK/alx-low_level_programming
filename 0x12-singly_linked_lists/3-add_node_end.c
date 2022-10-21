#include "lists.h"
#include "string.h"

/**
 * add_node_end - adds a node to the end of a list
 * @head: head node
 * @str: string to be added
 * Return: appended list
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *last;
int length = 0;
new = malloc(sizeof(list_t));
while (str[length])
length++;
new->str = strdup(str);
new->len = length;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}
return (*head);
}
