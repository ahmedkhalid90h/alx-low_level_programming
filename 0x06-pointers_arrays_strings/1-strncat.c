#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings. it will use at
 *            most n bytes from src
 *
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
char *trs = dest;
while (*trs != '\0')
trs++;
while (*src != '\0' && n-->0)
*trs++ = *src++;
*trs = '\0';
return( dest);
}
