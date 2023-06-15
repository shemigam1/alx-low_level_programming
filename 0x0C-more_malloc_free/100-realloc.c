#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: ptr
 * @old_size: int
 * @new_size: int
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		char *src = (char *)ptr;
		char *dest = (char *)newptr;

		for (i = 0; i < new_size; i++)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		newptr = malloc(new_size);
		return (newptr);
	}
	
	free(ptr);
	return (newptr);
}
