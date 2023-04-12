#include <stdlib.h>
#include <string.h>

int wordcounter(char *s);
/**
 * strtow - chnges strings to words
 * @str: string
 * Return: char *
 */
char **strtow(char *str)
{
	char **result, *s;
	int a, b, l1, wd, c, st, en;

	l1 = strlen(str);
	wd = wordcounter(str);
	if (wd == 0)
	return (NULL);

	result = (char **)malloc(sizeof(char *) * (wd + 1));
	if (result == NULL)
		return (NULL);
	c = 0;
	b = 0;
	for (a = 0; a <= l1; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				en = a;
				s = (char *)malloc(sizeof(char) * (c + 1));
				if (s == NULL)
				return (NULL);
				while (st < en)
					*s++ = str[st++];
				*s = '\0';
				result[b] = s - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
		st = a;
	}
	result[b] = NULL;
	return (result);
}


/**
 * wordcounter - counts the words
 * @s: string
 * Return: int
 */
int wordcounter(char *s)
{
	int count, a, word;

	count = 0;
	word = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			word++;
		}
	}
	return (word);
}
