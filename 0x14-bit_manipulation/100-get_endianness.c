#include "main.h"

/**
 * get_endianness - prints all the elements of a linked list
 * Return: number
 */

int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;

return ((int)*c);
}
