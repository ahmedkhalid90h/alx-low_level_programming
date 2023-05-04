#include "main.h"

/**
 * binary_to_uint - prints all the elements of a linked list
 * @b: linked list of type listint_t to print
 * Return: number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int nu = 0;
int i = 0;
if (!b)
return (0);
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0);
nu <<= 1;
if (b[i] == '1')
nu = nu ^ 1;
i++;
}
return (nu);
}
