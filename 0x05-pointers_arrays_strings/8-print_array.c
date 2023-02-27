#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer to an array of integers
 * @n: number of elements of the array to be printed
 * Return: void
**/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (!(i + 1 == n))
		{
			printf(", ");
		}
	}
	printf("\n");
}
