#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates strings
 * @s1: base
 * @s2: string to be added
 * @n: number of char in s2 to be added to s1
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, l1, l2;
	char *result;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (n >= l2)
	n = l2;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	result = (char *)malloc((l1 + n + 1));
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
		for (a = 0; a < n; a++)
		result[a + l1] = s2[a];
	}
	result[l1 + n + 1] = '\0';
	return (result);
}
