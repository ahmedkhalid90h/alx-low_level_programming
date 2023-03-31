#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *tmp;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = strlen(str);
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = add;
	return (add);
}
