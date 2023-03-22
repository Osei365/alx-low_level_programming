#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	long sum = 0;
	long n1 = 0;
	long n2 = 1;
	long n3 = 0;

	while (n3 <= 4000000)
	{
		n3 = n1 + n2;
		if (n3 % 2 == 0)
		{
			sum = sum + n3;
		}
		else
		{
			continue;
		}
		n1 = n2;
		n2 = n3;
	}
	printf("%ld\n", sum);
	return (0);
}
