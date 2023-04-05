#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint_safe - a function that prints a listint_t linked list.
* @head: a linked_list
* Return: a structure to a linked_list
**/

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *temp;

while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
temp = head;
head = head->next;
if (temp <= head)
{
printf("-> [%p] %d\n", (void *)head, head->n);
break;
}
}
return (count);
}
