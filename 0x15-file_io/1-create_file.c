#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{

int fCheck, len = 0;


if (filename == NULL)


    return (-1);

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

return (1);
}
