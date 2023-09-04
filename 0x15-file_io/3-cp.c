#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void error(char *msg, char *file, int status);
void copy_file(char *file_from, char *file_to);

/**
 * error - Prints an error message and exits the program.
 * @msg: The error message to print.
 * @file: The name of the file related to the error.
 * @status: The exit status code.
 */
void error(char *msg, char *file, int status)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(status);
}

/**
 * copy_file - Copies the contents of one file to another.
 * @file_from: The name of the file to copy from.
 * @file_to: The name of the file to copy to.
 */
void copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error("Error: Can't read from file %s\n", file_from, 98);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error("Error: Can't write to %s\n", file_to, 99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error("Error: Can't write to %s\n", file_to, 99);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error("Error: Can't read from file %s\n", file_from, 98);
	}

	if (close(fd_from) == -1)
		error("Error: Can't close fd %d\n", file_from, 100);

	if (close(fd_to) == -1)
		error("Error: Can't close fd %d\n", file_to, 100);
}

/**
 * main - Entry point for the program.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		error("Usage: cp file_from file_to\n", NULL, 97);

	copy_file(argv[1], argv[2]);

	return (0);
}

