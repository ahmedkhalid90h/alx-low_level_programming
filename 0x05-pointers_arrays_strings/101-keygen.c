#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int i, sum;

	srand(time(NULL));
	for (i = 0, sum = 2772; sum > 122; i++)
	{
		password[i] = 33 + rand() % 94;
		sum -= password[i];
	}
	password[i] = sum;
	password[i + 1] = '\0';
	printf("%s", password);
	return (0);
}
