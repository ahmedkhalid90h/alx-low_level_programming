#include "main.h"

/**
 * print_binary - prints all the elements of a linked list
 * @n: linked list of type listint_t to print
 * Return: number
 */

void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
putchar((n & 1) + '0');
}
