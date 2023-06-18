#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: length of s2
 * Return: concatenated string or null
 *
 * Code by 0xOneBeing
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, length = n;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length++;

	str = malloc((length + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	length = 0;

	for (i = 0; s1[i]; i++)
		str[length++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		str[length++] = s2[i];

	str[length] = '\0';

	return (str);
}
