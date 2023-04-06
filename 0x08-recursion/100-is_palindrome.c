#include "main.h"
#include <string.h>

int palindrom_check(char *s, char *ch);

/**
 * is_palindrome - chek if a string is a palidrome
 * @s: string
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	int l = strlen(s);
	char *ch;

	ch = s;
	ch = ch + l - 1;

	return (palindrom_check(s, ch));
}

/**
 * palindrom_check - changes string to reverse
 * @s: string
 * @ch: string
 * Return: char *
 */
int palindrom_check(char *s, char *ch)
{
	if (*s != *ch)
	{
		return (0);
	}
	if (*s && *ch)
	{
		return (palindrom_check(s + 1, ch - 1));
	}
	else
	return (1);
}
