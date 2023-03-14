#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
char *dup_str;
int i, len = 0;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
dup_str = (char *)malloc((sizeof(char) * len) +1);
if (dup_str == NULL)
return (NULL);
for (i = 0; i < len; i++)
dup_str[i] = str[i];

return (dup_str);
}
