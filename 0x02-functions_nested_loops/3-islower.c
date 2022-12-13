#include "main.h"
/**
 * _islower - checks if a char islower
 * @c - character
 *
 * Return: 1 if success 0 if fail
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
