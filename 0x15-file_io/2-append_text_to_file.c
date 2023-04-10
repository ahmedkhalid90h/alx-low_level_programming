#include "main.h"

/**
 * append_text_to_file - prints all the elements of a linked list
 * @filename: linked list of type listint_t to print
 * @text_content: linked list of type listint_t to print
 * Return: number
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, len = 0;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
write(fd, text_content, len);
}
close(fd);
return (1);
}
