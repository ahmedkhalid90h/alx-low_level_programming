#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Everything worked ok
 */

int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
