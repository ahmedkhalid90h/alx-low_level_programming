#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @n: string to add to the new node
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node,*tmp;

new_node = malloc(sizeof(listint_t));
new_node->n = n;
new_node->next = *head;

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
