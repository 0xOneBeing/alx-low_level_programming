#include "main.h"

/**
 * error_files - Checks if the files could be opened
 * @file_from: The originating file
 * @file_to: The destination file
 * @argv: Argiument Vector
 *
 * Code by 0xOneBeing
 */

void error_files(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Ërror: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Ërror: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: (EXIT_SUCCESS)
 *
 * Code by 0xOneBeing
 */

int main(int argc, char *argv[])
{
	int from, to, close_error;
	ssize_t n_chars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_files(from, to, argv);

	n_chars = 1024;
	while (n_chars == 1024)
	{
		n_chars = read(from, buffer, 1024);

		if (n_chars == -1)
			error_files(-1, 0, argv);

		nwr = write(to, buffer, n_chars);

		if (nwr == -1)
			error_files(0, -1, argv);
	}
	close_error = close(from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	close_error = close(to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (EXIT_SUCCESS);
}
