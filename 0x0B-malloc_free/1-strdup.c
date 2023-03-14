#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str:pointer string
 * Return: a pointerto to a newly allocated space in memory.
*/

char *_strdup(char *str)
{
char *dup_str;
int i, len = 0;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
dup_str = (char *)malloc((sizeof(char) * len) + 1);
if (dup_str == NULL)
return (NULL);
for (i = 0; i < len; i++)
dup_str[i] = str[i];

return (dup_str);
}
