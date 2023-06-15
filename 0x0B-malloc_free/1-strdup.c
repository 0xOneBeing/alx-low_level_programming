#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns pointer to newly allocated space in memeory
 * @str: the string
 * Return: duplicate
 *
 * Code by 0xOneBeing
 */

char *_strdup(char *str)
{
	size_t length;
	char *duplicate;

	length = strlen(str);
	duplicate = (char *) malloc((length + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}
