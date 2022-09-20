#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: char variable to hold the string argument
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int strlen;

	for (strlen = 0; s[strlen] != '\0'; strlen++)
        {
                strlen++;
                return strlen;
        }
}
