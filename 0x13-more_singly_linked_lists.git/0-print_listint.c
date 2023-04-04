#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * @print_listint:fun return number of node
 * @count:count number of node
*/
size_t print_listint(const listint_t *h)
{
int count = 0;
while (h)
{
printf("%d\n",h->n);
count++;
h = h->next;
}
return count;
}
