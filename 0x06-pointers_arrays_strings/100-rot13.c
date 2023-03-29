#include <string.h>
/**
 * rot13 - encodes a string in rot13
 * @s: string
 * Return: char *
 */
char *rot13(char *s)
{
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char buf;
	int l, i, a;

	l = strlen(s);
	for (i = 0; i < l; i++)
	{
		buf = *(s + i);
		for (a = 0; a < 52; a++)
		{
			if (buf == alph[a])
			{
				*(s + i) = rot[a];
				break;
			}
		}
	}
	return (s);
}
