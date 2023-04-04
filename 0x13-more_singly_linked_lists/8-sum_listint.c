#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

/**
 * *sum_listint - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 * Return: int
 */

int sum_listint(listint_t *head)
{
unsigned int i;
i = 0;
if (head == NULL)
return (0);
while (head)
{
i += head->n;
head = head->next;
}

return (i);
}
