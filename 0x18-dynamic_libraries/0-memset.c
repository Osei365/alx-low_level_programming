#include <string.h>
/**
 * _memset - fills memory with coonstant byte
 * @s: pointer variable
 * @b: pointer variable
 * @n: number of bytes to be filled
 * Return: char *
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
