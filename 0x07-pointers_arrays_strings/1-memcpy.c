#include <string.h>
/**
 * _memcpy - copies memory
 * @dest - pointer
 * @src - pointer
 * @n: number of bytes to copy
 * Return: char *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
