#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: int
 */

int get_endianness(void)
{
	unsigned int n;
	char *p;

	n = 1;
	p = (char*)&n;

	if (*p == 1)
		return (1);
	else
		return (0);
}
