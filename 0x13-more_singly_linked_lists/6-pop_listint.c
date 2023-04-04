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
unsigned int num;
listint_t *tmp;
if (head != NULL || *head != NULL)
return (0);
tmp = *head;
num = tmp->n;
*head = (* head)->next;
free(tmp);
return(num);
}
