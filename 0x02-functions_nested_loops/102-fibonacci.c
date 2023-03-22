#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	long n1 = 0;
	long n3;
	long n2 = 1;
	int i;

	for (i = 0; i < 50; i++)
	{
		n3 = n1 + n2;
		if (i != 49)
		{
			printf("%ld, ", n3);
		}
		else
		{
			printf("%ld\n", n3);
		}
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
