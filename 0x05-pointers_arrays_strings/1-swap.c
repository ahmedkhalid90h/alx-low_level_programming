#include "main.h"

/**
 * main - check the code
 *  swap_int: replacing a to b
 *  @a:a value in aco
 *  @b:b value in a
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int aco = *a;
*a = *b;
*b = aco;
}
