#include <stdlib.h>
/**
 * create_array - creates array of char
 * @size: size of array
 * @c: first character
 * Return: NULL or pointer depending on condition
 */
char *create_array(unsigned int size, char c)
{
	char *result;
	unsigned int a;

	if (size == 0)
	return (NULL);

	result = (char *)malloc(size * sizeof(char));
	if (result == NULL)
	return (NULL);
	for (a = 0; a < size; a++)
	{
		result[a] = c;
	}
	return (result);
}
