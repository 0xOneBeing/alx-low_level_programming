#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a sample dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Code by 0xOneBeing
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * dog_t - Typedef for struct dog
 *
 * Code by 0xOneBeing
 */

typedef struct dog dog_t;

#endif
