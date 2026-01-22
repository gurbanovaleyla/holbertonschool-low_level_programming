#include "main.h"
#include <stdio.h>

#define BUF_SIZE 1024

/**
* close_fd - closes a file descriptor and handles errors
* @fd: file descriptor to close
*/
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
* copy_data - copies data from one file to another
* @fd_from: source file descriptor
* @fd_to: destination file descriptor
*/
void copy_data(int fd_from, int fd_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			close_fd(fd_from);
			close_fd(fd_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		close_fd(fd_from);
		close_fd(fd_to);
		exit(98);
	}
}

/**
* main - copies content of one file to another
* @ac: argument count
* @av: argument vector
*
* Return: 0 on success, exits on failure
*/
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close_fd(fd_from);
		exit(99);
	}

	copy_data(fd_from, fd_to);
	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
