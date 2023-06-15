#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenated stringd
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 *
 * Code by 0xOneBeing
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *concat = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if ((s1 == NULL) || (s2 == NULL))
	{
		s1 = "";
		s2= "";
	}
	
	if (concat == NULL)
		return (NULL);

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
