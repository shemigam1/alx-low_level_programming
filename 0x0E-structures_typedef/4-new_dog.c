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
	char *name_c;
	char *owner_c;

	while (name[i++])
		;
	while (owner[j++])
		;
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	name_c = malloc(i * sizeof(char));
	if (name_c == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		name_c[a] = name[a];
	}
	n_dog->name = name_c;
	n_dog->age = age;
	owner_c = malloc(j * sizeof(char));
	if (owner_c == NULL)
	{
		free(name_c);
		free(n_dog);
		return (NULL);
	}
	for (a = 0; a < j; a++)
	{
		owner_c[a] = owner[a];
	}
	return (n_dog);
}
