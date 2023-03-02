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
char *trs = dest;
while (*trs!='\0')
trs++;
while (*src!='\0'&&n-->0)
*trs++ = *src++;
*trs='\0';
return(dest);
}
