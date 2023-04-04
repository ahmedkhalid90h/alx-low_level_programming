#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

/**
 * *pop_listint - a function delete head of the list
 *
 * @head: A pointer to the first node of the list to free
 * Return: int
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
return (num);
}
