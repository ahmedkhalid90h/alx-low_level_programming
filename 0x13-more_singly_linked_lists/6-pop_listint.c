#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */

int pop_listint(listint_t **head)
{
int num;
listint_t *tmp;
if (head != NULL)
return (0);
if (*head != NULL)
return (0);

num = (*head)->n;
tmp = *head;
*head = (*head)->next;
free(tmp);
return(num);
}
