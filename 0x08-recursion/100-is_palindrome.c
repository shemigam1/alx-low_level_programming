#include "main.h"
#include <string.h>
/**
 * check_pal - check if str is palindrome
 * @s: ptr
 * @st: int
 * @end: int
 * Return: int
 */

int check_pal(char *s, int st, int end)
{
	if (st > end)
		return (1);
	if (s[st] != s[end])
		return (0);
	return (check_pal(s, st + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: ptr to str
 * Return: 0(failure) 1(success)
 */

int is_palindrome(char *s)
{
	int i;

	i = strlen(s);
	return (check_pal(s, i - 1));
}
