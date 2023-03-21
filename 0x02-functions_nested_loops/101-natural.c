#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int n;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", sum);
	return (0);
}
