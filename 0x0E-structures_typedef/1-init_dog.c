#include "dog.h"

/**
 * init_dog - initialized struct dog
 * @d: struct
 * @name: str
 * @age: float
 * @owner: str
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
