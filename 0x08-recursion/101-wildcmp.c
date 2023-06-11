#include <stdlib.h>
#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: (EXIT_SUCCESS) or (1)
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (EXIT_SUCCESS);
	if (*s1 == '\0' && *s2 == '\0')
		return (EXIT_FAILURE);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (EXIT_SUCCESS);
}
