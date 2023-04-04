#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;

if (*head == NULL)
return;
while(*head != NULL)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
*head = NULL;
}
