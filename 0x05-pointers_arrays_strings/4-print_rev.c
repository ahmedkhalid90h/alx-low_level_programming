#include <stdio.h>

/**
 * main - check the code
 *  _puts - counts the number of characters
 *  @s:string character
 * Return: Always 0.
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
