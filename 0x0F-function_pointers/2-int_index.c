#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer.
	* @array: array of integers
	* @size: size of array
	* @cmp: pointer to function to be used to compare values
	*
	* Return: index of the first element for which the cmp function does not
	* return 0. If no element matches, return -1. If size <= 0, return -1.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
