#include <stdio.h>

/**
 * _strlen_recursion - recursively calculates the length of a string
 * @s: string to be calculated
 * Return: recursively calculated length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/** Code by 0xOneBeing */
