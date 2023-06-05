#include "main.h"
#include <stddef.h>

/**
 * _strstr - returns a substring
 * @haystack: str
 * @needle: substring
 * Return: ptr to substr
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*needle != '\0')
		{
			if (*haystack == *needle)
				needle++;
			else
				break;
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
