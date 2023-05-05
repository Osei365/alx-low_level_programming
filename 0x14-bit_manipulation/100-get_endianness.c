#include "main.h"
/**
 * get_endianness - checks endianness of machine
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *)&n;

	if (*c)
		return (1);
	else
		return (0);
}
