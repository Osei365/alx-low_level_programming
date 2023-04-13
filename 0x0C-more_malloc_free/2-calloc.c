#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory and init with 0
 * @nmemb: number of elements
 * @size: size of datatype
 * Return: char *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	if (nmemb == 0 || size == 0)
	return (NULL);

	result = malloc(nmemb * size);
	if (result == NULL)
	return (NULL);

	bzero(result, (nmemb * size));
	return (result);
}
