#include "main.h"

/**
* _strcmp - a function that concatenates two strings
 * @dest: string
 * @src: string
 * @n:integer
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
break;
}
}

return s1[i] - s2[i];
}
