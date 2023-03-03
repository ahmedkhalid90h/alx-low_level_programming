#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: number
 */
void print_number(int n)
{
unsigned int num;

if (n < 0)
{
num = -n;
_putchar('-');
}
else
num = n;

if (num > 9)
{
print_number(num / 10);
}
_putchar(num % 10 + '0');
}
