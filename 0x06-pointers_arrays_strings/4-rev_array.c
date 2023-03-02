#include "main.h"

/**
* reverse_array - a function that concatenates two strings
 * @a: num
 * @n: num
 * Return: string
 */
void reverse_array(int *a, int n)
{
int i, j, tmp;

for (i = 0, j = n - 1; i < j; i++, j--)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
