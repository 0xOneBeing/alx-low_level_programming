#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: EXIT_SUCCESS - safe exit
 *
 * Code by 0xOneBeing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

	return (EXIT_SUCCESS);
}
