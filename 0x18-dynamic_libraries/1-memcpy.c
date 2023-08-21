#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*ptr = *src;
		src++;
		ptr++;
		n--;
	}
	return (dest);
}
