#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t count;

count = 0;

while (h)
{
count += 1;
h = h->next;
}
return (count);
}
