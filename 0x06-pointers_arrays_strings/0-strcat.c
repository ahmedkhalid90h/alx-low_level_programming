#include <stdio.h>
#include <time.h>

/**
* *_strcat - a function that concatenates two strings
* @dest: string
* @src: string
* Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j;
char *ptr = dest;
while (*ptr != '\0')
ptr++;
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
return (dest);
}
