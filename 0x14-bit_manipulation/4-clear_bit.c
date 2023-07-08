#include "main.h"

/**
 * clear_bit - overrides bit value to 0
 * @n: ptr to ulong
 * @index: uint
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	i = 1UL << index;
	*n &= ~i;
	return (1);
}
