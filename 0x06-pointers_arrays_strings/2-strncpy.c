#include <string.h>
/**
 * _strncpy - copies n parts of a string
 * @dest: string to be copied into
 * @src: string to be copied
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
