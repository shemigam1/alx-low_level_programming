#include "main.h"

/**
 * get_bit - returns value of bit at index
 * @n: ulong
 * @index: uint
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	int bit;

	if (index >= sizeof(unsigned long int ) * 8)
		return (-1);
	i = 1UL << index;
	bit = (n & i) != 0;
	return (bit);
}
