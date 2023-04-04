#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t count;

count = 0;

while (h)
{
printf("%i\n",h->n);
count+=1;
h = h->next;
}
return (count);
}
