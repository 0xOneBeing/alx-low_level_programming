#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * new_dog - creates a new dog type/object
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: the new dog
 *
 * Code by 0xOneBeing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bingo = malloc(sizeof(dog_t));

	if (bingo == NULL)
		return (NULL);

	bingo->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (bingo->name == NULL)
	{
		free(bingo);
		return (NULL);
	}

	bingo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (bingo->owner == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}

	bingo->name = _strcopy(doggo->name, name);
	bingo->age = age;
	bingo->owner = _strcopy(bingo->owner, owner);

	return (bingo);
}

/**
 * _strlen - gets the length of a string
 * @str: the string
 * Return: length of the string
 *
 * Code by 0xOneBeing
 */

int _strlen(char *str)
{
	int length;

	length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * _strcopy - copies a string source to buffer destination
 * @dest: the destination buffer
 * @src: string source
 * Return: buffer destination
 *
 * Code by 0xOneBeing
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
