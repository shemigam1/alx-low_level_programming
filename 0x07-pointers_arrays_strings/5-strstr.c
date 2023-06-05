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
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;

		while (*b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (*b == '\0')
			return (a);
		haystack++;
	}
	return (NULL);
}
