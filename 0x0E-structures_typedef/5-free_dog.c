#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: dog_t
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
