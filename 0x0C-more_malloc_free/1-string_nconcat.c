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
	unsigned int i, j, k;
	char *str;

	if (s1 == 0 || s2 == 0)
		return (NULL);

	if (j > n)
		j = n;

	str = malloc((i + j + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];

	for (k = 0; k < j; k++)
		s[k + i] = s2[k];

	str[i + j] = '\0';

	return (str);
}
