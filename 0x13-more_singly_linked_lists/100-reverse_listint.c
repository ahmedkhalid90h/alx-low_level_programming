#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* *reverse_listint - a function that reverse listint_ t linked list
* @head: a head of linked_list
* Return: a pointer to the first node of the reversed list
**/

listint_t *reverse_listint(listint_t **head)
{
listint_t *tmp, *tmp2;

tmp = NULL;
tmp2 = NULL;

if (head == NULL || *head == NULL)
return (NULL);

while (*head != NULL)
{
tmp2 = (*head)->next;
(*head)->next = tmp;
tmp = *head;
*head = tmp2;
}

*head = tmp;

return (*head);
}
