#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
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
