#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

/**
 * *get_nodeint_at_index - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 * @index: unsigned int to index
 * Return: int
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;

count = 0;

while (count < index)
{
if (head == NULL)
return (NULL);

head = head->next;
count++;
}
return (head);
}
