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
	dog_t *new_dog;
	int i, j, a = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	while (name[i++] != '\0')
		;
	while (owner[j++] != '\0')
		;
	new_dog->name = malloc(i * sizeof(new_dog->name));
	if (new_dog == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
	{
		new_dog->name[a] = name[a];
	}
	new_dog->age = age;
	new_dog->owner = malloc(j * sizeof(new_dog->owner));
	if (new_dog == NULL)
		return (NULL);
	for (a = 0; a < j; a++)
	{
		new_dog->owner[a] = owner[a];
	}
	return (new_dog);
}
