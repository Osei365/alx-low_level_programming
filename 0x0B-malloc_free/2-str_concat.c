#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concats two string
 * @s1: string
 * @s2: string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int a, l1, l2;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	
	l1 = strlen(s1);
	l2 = strlen(s2);
	result = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (result == NULL)
	return (NULL);
	if (s1)
	{
		for (a = 0; a < l1; a++)
		{
			result[a] = s1[a];
		}
	}
	if (s2)
	{
		for (a = 0; a < l2; a++)
		{
			result[a + l1] = s2[a];
		}
	}
	result[l1 + l2 + 1] = '\0';
	return (result);
}
