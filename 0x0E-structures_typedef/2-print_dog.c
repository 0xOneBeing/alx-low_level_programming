#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_dog - prints a dog structure
 * @d: the dog structure to print
 *
 * Code by 0xOneBeing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return (EXIT_SUCCESS);

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		prinf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
