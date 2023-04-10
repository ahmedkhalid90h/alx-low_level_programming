#include "main.h"

/**
 * clear_bit - prints all the elements of a linked list
 * @n: linked list of type listint_t to print
 * @index: linked list of type listint_t to print
 * Return: number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(*n) * 8)
return (-1);
*n &= ~(1 << index);
return (1);
}
