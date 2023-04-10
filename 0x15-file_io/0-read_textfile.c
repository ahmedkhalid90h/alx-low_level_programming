#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * 0 if the file can not be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fCheck;
ssize_t n_read, n_written;
char *buf;
if (filename == NULL)
return (0);
fCheck = open(filename, O_RDONLY);
if (fCheck == -1)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);
n_read = read(fCheck,buf, letters);
if (n_read == -1)
return (0);
n_written = write(STDOUT_FILENO, buf, n_read);
if (n_written == -1)
return (0);
free(buf);
close(fCheck);
return (n_written);
}
