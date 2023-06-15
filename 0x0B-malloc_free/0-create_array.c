#include <stdlib.h>

/**
 * create_size - creates an array of chars
 * @size: unsigned integer size
 * @c: character
 * Return: array of chars
 *
 * Code by 0xOneBeing
 */

char *create_size(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
