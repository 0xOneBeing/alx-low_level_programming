#include <stdio.h>
#include "main.h"

int is_palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome - is the string a palindrome?
 * @s: the string to check for palindrome plausibility
 * Return: (0) or (1)
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}

/**
 * is_palindrome_recursive - checks if palindrome is recursive
 * @s: the string to check
 * @start: where to start
 * @end: where to finish
 * Return: plausible palindrome
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}
