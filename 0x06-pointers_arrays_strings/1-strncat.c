#include "main.h"

/**
* *_strcat - a function that concatenates two strings
 * @dest: string
 * @src: string
 * @n:integer
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
int i;
while (*ptr != '\0')
*ptr++;
while (*src != '\0' && n-- >= 0)
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
