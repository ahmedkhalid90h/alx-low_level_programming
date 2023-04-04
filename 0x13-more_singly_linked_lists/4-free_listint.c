#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_listint - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */

void free_listint(listint_t *head)
{
listint_t *cur;
while (head != NULL)
{
cur = head;
head = head->next;
free(cur);
}
}
