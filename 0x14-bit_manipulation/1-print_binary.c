#include "main.h"

/**
 * create_file - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @text_content: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

int create_file(const char *filename, char *text_content)
{
int fCheck, len = 0;
if (filename == NULL)
return (0);
fCheck = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fCheck == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
write(fCheck, text_content, len);
}
close(fCheck);
return (-1);
}
