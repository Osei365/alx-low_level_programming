#include <stdio.h>
/**
 * main - Entry point
 * description: print all alphabests (lowercase)
 * Return: always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		if (a == 122)
		{
			putchar(a);
			putchar('\n');
		}
		else
		{
			putchar(a);
		}
	}
	return (0);
}
