#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * myStartupFun - Apply the constructor attribute to myStartupFun() so that it
 *   is executed before main()
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
