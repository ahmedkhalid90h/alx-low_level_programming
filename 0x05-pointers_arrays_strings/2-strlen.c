#include <stdio.h>

/**
 * main - check the code
 *  _strlen - counts the number of characters
 *  @s:string character
 * Return: Always 0.
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
