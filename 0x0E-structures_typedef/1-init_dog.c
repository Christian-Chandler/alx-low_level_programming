#include "dog.h"

/**
 * init_dog - initialize a variable of type 'struct dog'
 * @d: dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
