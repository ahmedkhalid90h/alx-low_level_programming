#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * add_nodeint_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @n: string to add to the new node
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *tmp;
tmp = *head;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (*head);
}

while (tmp->next != NULL)
tmp = tmp->next;

tmp->next = new_node;

return (*head);
}
