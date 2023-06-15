#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: size of array
 * @size: size of chae
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem != NULL)
	{
		char *buf = (char *)mem;

		for (a = 0; a < (nmemb * size); a++)
		{
			buf[a] = 0;
		}
	}
	else
		return (NULL);
	return (mem);
}
