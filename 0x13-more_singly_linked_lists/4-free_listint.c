#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */

void free_listint(listint_t *head)
{
if (head)
{
free_list(head->next);
if (head->next)
free_listint(head->next);
free(head);
}
}
