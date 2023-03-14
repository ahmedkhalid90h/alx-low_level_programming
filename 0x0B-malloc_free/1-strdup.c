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
    if (str == NULL)
        return NULL;
    char *dup_str = malloc(strlen(str) + 1);
    if(dup_str == NULL)
        return (NULL);
    strcpy(dup_str,str);
    return (str);
}

