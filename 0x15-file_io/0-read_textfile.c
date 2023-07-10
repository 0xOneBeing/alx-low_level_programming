#include "main.h"

/**
 * read_textfile - Reads a text file
 * @filename: The name of the text file
 * @letters: Size of the text file
 * Return: (EXIT_SUCCESS) or letters_2
 *
 * Code by 0xOneBeing
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, letters_2;
	char *buffer;

	letters_2 = 0;

	if (!filename)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));

	if (buffer == NULL)
		return (EXIT_SUCCESS);

	buffer[letters] = '\0';

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (EXIT_SUCCESS);

	letters_2 = read(file, buffer, letters);

	write(STDOUT_FILENO, buffer, letters_2);
	close(file);
	free(buffer);

	return (letters_2);
}
