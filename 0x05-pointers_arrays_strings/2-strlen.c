#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: char variable to hold the string argument
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i += i;
		return i;
	}
}
