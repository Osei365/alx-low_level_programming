#include <string.h>
/**
 * rev_string - makes the string reversed
 * @s: string to be reversed
 * Return: nothing (void)
 */
void rev_string(char *s)
{
	int l;
	int a;
	char *begin;
	char *end;
	char ch;

	l = strlen(s);
	begin = s;
	end = s + l - 1;
	for (a = 0; a <= (l - 1) / 2; a++)
	{
		ch =  *end;
		*end = *begin;
		*begin = ch;

		begin++;
		end--;
	}
}
