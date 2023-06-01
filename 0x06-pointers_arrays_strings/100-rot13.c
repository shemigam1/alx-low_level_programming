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
	int i, j;
	char *s = str;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + j) == alpha[i])
			{
				*(s + j) = rot13[i];
				break;
			}
		}
	}
	return (str);
}
