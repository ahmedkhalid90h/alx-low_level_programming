#include "main.h"

/**
* factorial - a function that returns the factorial of a given number.
* @n: integer number to be fact
* Return: factorial of given number
**/

int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
return (n * factorial(n - 1));
}
