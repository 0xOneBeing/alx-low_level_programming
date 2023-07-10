#include "main.h"

void not_close(int fd);

/**
 * main - Copies a file into another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: (EXIT_SUCCESS)
 *
 * Code by 0xOneBeing
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (arv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	cp(argv[1], argv[2]);

	return (EXIT_SUCCESS);
}

/**
 * cp - copy a file
 * @from: file to copy
 * @to: file to copy in
 *
 * Code by 0xOneBeing
 */

void cp(char *from, char *to)
{
	int file_r, file_w, r, w;
	char buff[1024];

	file_r = open(from, O_RDONLY);

	if (file_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}

	file_w = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}

	r = read(file_r, buff, 1024);

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}

	while (r != 0)
	{
		w = write(file_w, buff, r);

		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", to);
			exit(99);
		}

		r = read(file_r, buff, 1024);

		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
			exit(98);
		}
	}

	if (close(file_w) == -1)
		not_close(file_r);

	if (close(file_r) == -1)
		not_close(file_w);
}

/**
 * not_close - Prints an error
 * @fd: Value to print
 *
 * Code by 0xOneBeing
 */
void not_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
	exit(100);
}

