#include "main.h"

/**
 * get_bit - returns value of bit at index
 * @n: ulong
 * @index: uint
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit_val = n( >> index) & 1;
	return (bit);
}
