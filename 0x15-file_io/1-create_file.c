#include "main.h"

/**
 * create_file - Creaes a text file
 * @filename: Name of the text file
 * @text_content: Textual contnet of the text file
 * Return: -1 or EXIT_SUCCESS
 *
 * Code by 0xOneBeing
 */

int create_file(const char *filename, char *text_content)
{
	int i, file;

	i = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i])
		i++;

	write(file, text_content, i);
	close(file);

	return (EXIT_FAILURE);
}
