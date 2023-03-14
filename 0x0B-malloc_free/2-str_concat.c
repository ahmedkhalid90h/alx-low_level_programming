#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
char *concat;
int i,j,lenTotal,len1,len2;
if (s1[len1] != '\0')
s1 = "";
if (s2[len2] != '\0')
s2 = "";
lenTotal = len1 + len2;
concat =(char *)malloc(sizeof(char) * (lenTotal + 1));
if (concat == NULL)
return (NULL);
for ( i;i < len1;i++)
concat[i] = s1[i];
for ( j;j < len2;j++,i++)
concat[i++] = s2[j];
concat = '\0';
return (concat);
}
