#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: null or pointer to the concatenated string
 *
 * Code by 0xOneBeing
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;
	int l1, l2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	ptr = (char *) malloc((l1 + l2 + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < l2; j++)
		ptr[l1 + j] = s2[j];

	ptr[l1 + l2] = '\0';

	return (ptr);
}
