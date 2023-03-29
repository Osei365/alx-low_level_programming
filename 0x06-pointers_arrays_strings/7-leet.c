#include <string.h>
/**
 * leet - converts string to 1337
 * @s: string to be converted
 * Return: char *
 */
char *leet(char *s)
{
	char c[] = "aA4eE3oO0tT7lL1";
	int l, lc, i, a;
	char buf;

	l = strlen(s);
	lc = strlen(c);
	for (i = 0; i < l; i++)
	{
		buf = *(s + i);
		for (a = 0; a < lc; a += 3)
		{
			if (buf == c[a] || buf == c[a + 1])
			{
				*(s + i) = c[a + 2];
				break;
			}
		}
	}
	return (s);
}
