#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Realease the memory allocated for a list
 * @head: A pointer to the first node of the list to free
 *  Return: nothing
 */

void free_listint2(listint_t **head)
{
listint_t *i;

if (*head == NULL)
return;
while (*head != NULL)
{
i = *head;
*head = (*head)->next;
free(i);
}
*head = NULL;
}
