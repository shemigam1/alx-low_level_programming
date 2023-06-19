#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * *copy - copy string
 * @d: char
 * @s: char
 * Return: ptr
 */

char *copy(char *d, char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		*(d + i) = *(s + i);
		i++;
	}
	*(d + i) = '\0';
	return (d);
}

/**
 * new_dog - creates a new dog
 * @name: str
 * @age: float
 * @owner: str
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *new;

	new = malloc(sizeof(struct dog));
	if (new == NULL)
		return (NULL);

	i = 0;
	while (name[i] != '\0')
		i++;
	j = 0;
	while (owner[j] != '\0')
		j++;
	new->name = malloc(sizeof(char) * (i + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = copy(new->name, name);
	new->age = age;
	new->owner = malloc(sizeof(char) * (j + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->owner = copy(new->owner, owner);
	return (new);
}
