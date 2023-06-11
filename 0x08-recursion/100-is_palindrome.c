#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int match(char *s, int l_lim, int u_lim);
int palin_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: the string to be cheked
 * Return: result
 *
 * Code by 0xOneBeing
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (EXIT_FAILURE);
	return (match(s, 0, palind_recursion(s) - 1));
}

/**
 * match - checks if there is a match in string
 * @s: string to check
 * @l_lim: lower limit
 * @u_lim: upper limit
 * Return: (EXIT_SUCCESS) - safe exit
 */

int match(char *s, int l_lim, int u_lim)
{
	if (*(s + l_lim) == *(s + u_lim))
	{
		if (l_lim == u_lim || l_lim == u_lim + 1)
			return (EXIT_FAILURE);
		return (0 + match(s, l_lim + 1, u_lim - 1));
	}

	return (EXIT_SUCCESS);
}

/**
 * palin_recursion - prints palindrom recursively
 * @s: the string
 * Return: (0) or (1 + palin_recursion(s + 1))
 */

int palin_recursion(char *s)
{
	if (*s == '\0')
		return (EXIT_SUCCESS);
	else
		return (1 + palin_recursion(s + 1));
}
