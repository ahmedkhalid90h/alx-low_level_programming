#include "main.h"

/**
* _strlen - function that returns the length of a string.
* @s : s is a character
* Return: value is i
**/

int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}

/**
 * puts_half - unction that prints half of a string, followed by a new line.
 * character, followed by a new line
 * @str: pointer to a string
 * Return: void
**/
void puts_half(char *str)
{
int i;
if (_strlen(str) % 2 == 0)
{
for (i = _strlen(str) / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = ((_strlen(str) / 2) + 1); str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
