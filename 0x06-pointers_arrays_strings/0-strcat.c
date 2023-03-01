#include <stdio.h>
#include <time.h>

/**
 * @dest:return
 * @src:replace
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i =0, j;
char *p = dest;
while (*p != '\0')
p++;
while (*src!='\0'){
*p= *src;
p++;
src++;
}
*p='\0';
return(dest);
}
