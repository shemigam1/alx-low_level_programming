#include "dog.h"
#include <stdlib.h>

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
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
