#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp < 0)
		return (-1);

	if (text_content)
	{
		if (write(fp, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(fp);

	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
