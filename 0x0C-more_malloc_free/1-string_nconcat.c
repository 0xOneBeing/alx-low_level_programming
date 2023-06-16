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
	char *concatenated;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concatenated = (char *) malloc((len1 + n + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	memcpy(concatenated, s1, len1);
	memcpy(concatenated + len1, s2, n);

	concatenated[len1 + n] = '/0';

	return (concatenated);
}
