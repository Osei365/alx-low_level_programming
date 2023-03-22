#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	long long int n1 = 1;
	long long int n2 = 2;
	long long int n3;
	int i;

	printf("%ld, ", n1);
	printf("%ld, ", n2);
	for (i = 0; i < 96; i++)
	{
		n3 = n1 + n2;
		if (i != 95)
		{
			printf("%lld, ", n3);
		}
		else
		{
			printf("%lld\n", n3);
		}
		n1 = n2;
		n2 = n3;
	}
	return (0);
}

