#include "main.h"

/**
 * flip_bits - returns number of bits to filp a number
 * @n: ulong
 * @m: ulong
 * Return: uint
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int i;

	x = n ^ m;
	i = 0;
	while (x != 0)
	{
		x &= (x - 1);
		i++;
	}
	return (i);
}
