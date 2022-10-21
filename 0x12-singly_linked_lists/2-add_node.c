#include "lists.h"
#include "string.h"

/**
 * add_node - adds node to a list
 * @head: head of list;
 * @str: string to be added
 * Return: list
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *tmp;
int length = 0;
tmp = malloc(sizeof(list_t));
if (tmp == NULL)
return (NULL);
while (str[length])
length++;
tmp->len = length;
tmp->str = strdup(str);
tmp->next = *head;
*head = tmp;
return (tmp);
}
