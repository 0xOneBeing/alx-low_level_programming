#include "main.h"

/**
 * append_text_to_file - Appends a piece of text to the end of a file
 * @filename: The name of the text file
 * @text_content: Textual content of the text file
 * Return: -1 or (EXIT_FAILURE)
 *
 * Code by 0xOneBeing
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, file;

	i = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

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
