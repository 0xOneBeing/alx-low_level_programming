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
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - type definition for dog structure
 *
 * Code by 0xOneBeing
 */

typedef struct dog dog_t;

#endif
