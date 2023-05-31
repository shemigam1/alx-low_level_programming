#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: pointer
 * Return: 0
 */

int _atoi(char *s)
{
	int res;
	int sign;

	sign = 1;
	res = 0;
	

	while (*s != '\0')
	{
		if (*s == 32 || *s == 9)
		{
			s++;
		}
		if (*s == '-' || *s == '+')
		{
			sign = (*s == '-' ? -1 : 1);
			s++;
		}
		if (*s >= '0' && *s <= '9')
		{
			res = res * 10 + (*s - '0');
		}
		else
		{
			s++;
		}
		s++;
	}
	return (sign * res);
}
