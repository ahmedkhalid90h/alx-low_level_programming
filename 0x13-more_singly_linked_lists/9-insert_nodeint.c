#include "lists.h"
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 * @idx: get integer number
 * @n: number the first node
 * Return: node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *cha;
listint_t *new_node;
cha = *head;
new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

for (; idx != 1; idx--)
cha = cha->next;

new_node->next = cha->next;
cha->next = new_node;

return (new_node);
}
