#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fp;

	if (!filename)
		return (-1);

	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	if (text_content)
		write(fp, text_content, _strlen(text_content));

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
