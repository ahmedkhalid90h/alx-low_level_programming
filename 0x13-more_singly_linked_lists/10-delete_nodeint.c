#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

/**
 * *delete_nodeint_at_index - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 * @index: get integer number
 * Return: node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *cha, *c;
unsigned int i;
i = 0;

if (head == NULL || *head == NULL)
return (-1);

cha = *head;
c = NULL;

for (; i < index; i++)
{
if (cha == NULL)
return (-1);
c = cha;
cha = cha->next;
}

if (c == NULL)
*head = cha->next;
else
c->next = cha->next;

free(cha);

return (1);
}
