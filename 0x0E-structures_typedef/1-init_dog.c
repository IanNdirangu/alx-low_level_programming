#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - this function initializes a variable of type struct dog
 * @d: this is a pointer to struct dog to initialize
 * @name: the dog's name to initialize
 * @age: the dog's age to initialize
 * @owner: the dog's owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
