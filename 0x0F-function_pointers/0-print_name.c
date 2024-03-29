#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string
 * @f: ptr to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
