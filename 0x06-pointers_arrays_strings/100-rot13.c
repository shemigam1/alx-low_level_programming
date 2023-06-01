#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: pointer
 */

char *rot13(char *str)
{
	char rot13[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int i;
	char *s = str;

	while (*s != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == alpha[i])
			{
				*s = rot13[i];
			}
		}
		s++;
	}
	return (str);
}
