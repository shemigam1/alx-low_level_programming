#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strcpy - copies string
 * @dest: str
 * @src: str
 * Return: str
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
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
	dog_t *new_dog;
	char *name_c, *owner_c;
	int i, j = 0;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	name_c = malloc(i * sizeof(char));
	owner_c = malloc(j * sizeof(char));
	if (name_c == NULL || owner_c == NULL)
	{
		free(new_dog);
		free(name_c);
		free(owner_c);
		return (NULL);
	}
	_strcpy(name_c, name);
	_strcpy(owner_c, owner);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
