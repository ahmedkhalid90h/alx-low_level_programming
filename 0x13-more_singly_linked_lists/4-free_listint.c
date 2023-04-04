#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node,*tmp;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

if (*head == NULL)
{
*head = new_node;
return (new_node);
}
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = new_node;

return (new_node);
}
