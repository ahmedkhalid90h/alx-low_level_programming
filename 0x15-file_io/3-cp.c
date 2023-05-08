#include "main.h"
/**
 * main - copy a file.
 * @argc: the number of args
 * @argv: the Args.
 * Description: copy a file
  * Return: 0 in success.
 */
int main(int argc, char *argv[])
{
	int src, dest, Read, close_src, close_dest;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((Read = read(src, buffer, 1024)) > 0)
	{
		if (dest == -1 || (write(dest, buffer, Read) != Read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (Read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_src = close(src);
	if (close_src < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", src), exit(100);
	close_dest = close(dest);
	if (close_dest < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", dest), exit(100);
	return (0);
}
