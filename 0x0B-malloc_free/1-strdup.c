#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns pointer to newly allocated space in memeory
 * @str: the string
 * Return: null or pointer to allocated space
 *
 * Code by 0xOneBeing
 */

char *_strdup(char *str)
{
	int length;
	char *duplicate;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;

	duplicate = (char *) malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		duplicate[i] = str[i];
	}

	duplicate[length] = '\0';

	return (duplicate);
}
