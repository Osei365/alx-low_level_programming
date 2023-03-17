#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}

