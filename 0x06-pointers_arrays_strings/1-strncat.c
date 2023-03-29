#include <string.h>
/**
 * _strncat - concats strings based on n bytes
 * @dest: string to concat
 * @src: string to be added
 * @n: number of bytes
 * Return: concated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
