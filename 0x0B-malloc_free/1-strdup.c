#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to arg on heap
 * @str: string
 * Return: ptr to str
 */

char *_strdup(char *str)
{
	int i, j;
	char *newstr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	newstr = malloc((sizeof(char) * i) + 1);
	if (newstr == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		newstr[j] = str[j];
	}
	return (newstr);
}
