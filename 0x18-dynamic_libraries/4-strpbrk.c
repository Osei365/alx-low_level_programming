#include <string.h>
/**
 * _strpbrk - locates first occurence of set bytes
 * in a string
 * @s: string
 * @accept: set bytes
 * Return: char *
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
