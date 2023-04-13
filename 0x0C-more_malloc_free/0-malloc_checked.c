#include <stdlib.h>
/**
 * malloc-checked - alocates memory
 * @b: allocation space
 * Return: nothing (void)
 */
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);
	if (result == NULL)
	exit(98);
	return (result);
}
