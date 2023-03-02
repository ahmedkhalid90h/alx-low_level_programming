#include "main.h"

/**
 * _strncat - Copies memory area
 *
 * @dest: where to copy the memory to
 * @n: the number of bytes
 * @src: the memory area to copy from
 *
 * Return: a pointer to @dest
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
