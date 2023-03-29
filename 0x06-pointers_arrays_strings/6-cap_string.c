#include "main.h"
#include <string.h>
/**
 * cap_string - converts words to caps
 * @s: string to be converted
 * Return: char *
 */
char *cap_string(char *s)
{
	char c[] = "	 \n,;.!?\"(){}";
	int l, i, nc, a, lc;

	l = strlen(s);
	lc = strlen(c);
	for (i = 0; i < l; i++)
	{
		nc = *(s + i);
		if (i == 0 && (nc >= 97 && nc <= 122))
		{
			nc = nc - 32;
		}
		else if (i > 0)
		{
			for (a = 0; a < lc; a++)
			{
				if (*(s + i - 1) == c[a] && (nc >= 97 && nc <= 122))
				{
					nc = nc - 32;
					break;
				}
			}
		}
		*(s + i) = nc;
	}
	return (s);
}
