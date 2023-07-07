#include "main.h"

/**
 * binary_to_uint - converts binary to uint
 * @b: binary str
 * Return: uint
 */

unsigned int binary_to_uint(const char *b)
{
	const char *c;
	unsigned int dec = 0;
	int i = 0;

	c = b;
	if (c == NULL)
		return (0);
	while (c[i] != '\0')
	{
		if (c[i] != '0' && c[i] != '1')
			return (0);
		dec = dec * 2 + (c[i] - '0');
		i++;
	}
	return (dec);
}
