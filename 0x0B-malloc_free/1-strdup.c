#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns pointer to newly allocated
 * space
 * @str: string
 * Return: either NULL or pointer
 */
char *_strdup(char *str)
{
	char *result;
	int a, l;

	if (str == NULL)
	return (NULL);

	l = strlen(str);
	result = (char *)malloc(sizeof(char) * strlen(str));
	for (a = 0; a < l; a++)
	{
		result[a] = str[a];
	}
	return (result);
}
