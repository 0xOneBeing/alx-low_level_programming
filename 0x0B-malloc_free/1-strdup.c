#include <string.h>
#include "main.h"

/**
 * _strdup - pointer to a newly allocated memory space
 * @str: the string
 * Return: null or pointer to newly allocated memory space
 *
 * Code by 0xOneBeing
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int length;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;

	ptr = (char *) malloc((length + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = ; str[i]; i++)
		ptr[i] = str[i];

	ptr[length] = '\0';

	return (ptr);
}
