#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: str
 * @age: float
 * @owner: str
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i, j, a = 0;

	while (name[i++])
		;
	while (owner[j++])
		;
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = malloc(i * sizeof(n_dog->name));
	if (n_dog == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
	{
		n_dog->name[a] = name[a];
	}
	n_dog->age = age;
	n_dog->owner = malloc(j * sizeof(n_dog->owner));
	if (n_dog == NULL)
		return (NULL);
	for (a = 0; a < j; a++)
	{
		n_dog->owner[a] = owner[a];
	}
	return (n_dog);
}
