#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: New dog name.
 * @age: New dog age.
 * @owner: New dog's owner.
 * Return: NULL if function fails otherwise pointer to new dog details.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_puppy;
	char __attribute__((unused)) *name_cpy, *owner_cpy;

	name_cpy = name;
	owner_cpy = owner;
	new_puppy = malloc(sizeof(dog_t));

	if (new_puppy == NULL)
		return (NULL);
	new_puppy->name = name;
	new_puppy->age = age;
	new_puppy->owner = owner;

	return (new_puppy);
}
