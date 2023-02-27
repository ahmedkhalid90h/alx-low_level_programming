#include "main.h"

/**
 * _atoi - function that converts a string to an integer.
 * @s: pointer to a string
 * Return: integer
**/
#include <time.h>

#define PASSWORD_LENGTH 10

int main()
{
    char password[PASSWORD_LENGTH+1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;':\",./<>?";

    srand(time(NULL)); // Seed the random number generator with the current time

    // Generate a random character for each position in the password
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0'; // Add null terminator at the end of the password

    printf("%s\n", password);

    return 0;
}
