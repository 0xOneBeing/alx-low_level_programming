#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: char variable to hold the string argument
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i;

	for (; s[i] != '\0'; i++)
	{
		i++;
		return i;
	}
}
