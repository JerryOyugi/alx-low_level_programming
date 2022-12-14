#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: command line arguments
 *
 * Description: Copies the content of a file to another file depending on
 * Usage, permissions and using 1024 bytes at a time from the file_from
 *
 * Return: 0 (success) or exit with status of:
 * 97 if argc is incorrect
 * 98 if file_from doesn't exist or can't be read
 * 99 if unable to create or if wite to file_to fails
 * 100 if unable to close
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	long read_count, write_count;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n" argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((read_count = read(fd_from, buffer, 1024)) != 0)
	{
		if (read_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: CAn't read from file %s\n", argv[1]);
			exit(98);
		}
		write_count = write(fd_to, buffer, read_count);
		if (write_count == -1 || (write_count != read_count))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
