#include "main.h"

/**
 *  _puts - counts the number of characters
 *  @str:string character
 * Return: Always 0.
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str++);
}
_putchar('\n');
}
