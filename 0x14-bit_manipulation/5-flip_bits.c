#include "main.h"

/**
 * flip_bits - prints all the elements of a linked list
 * @n: linked list of type listint_t to print
 * @m: linked list of type listint_t to print
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i, count = 0;

for (i = 0; i < sizeof(n) * 8; i++)
if (((n >> i) & 1) != ((m >> i) & 1))
count++;
return (count);
}
