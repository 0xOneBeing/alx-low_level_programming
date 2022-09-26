#include "main.h";

/**
 * _memset - Fxn fills memory with a constant byte
 *
 * @s: char variable 's'
 * @b: char varaiabke 'b'
 * @n: unsigned in variable 'n'
 *
 * Return - the pointer to the memory area 's'
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (unsigned int i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
