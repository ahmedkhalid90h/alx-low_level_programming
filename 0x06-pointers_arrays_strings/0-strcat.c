#include <stdio.h>
#include <time.h>

/**
@dest:is s1 value is "Hello " and i return "Hello world"
@src:is s2 value is World
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
