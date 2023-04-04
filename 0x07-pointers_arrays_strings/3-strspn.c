#include <string.h>
/**
 * _strspn - length if prefix
 * @s: styring
 * @accept: string
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
