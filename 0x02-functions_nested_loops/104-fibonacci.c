#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	long n1 = 1;
	long n2 = 2;
	long n3;
	int i;

	printf("%li, ", n1);
	printf("%li, ", n2);
	for (i = 0; i < 96; i++)
	{
		n3 = n1 + n2;
		if (i != 95)
		{
			printf("%li, ", n3);
		}
		else
		{
			printf("%li\n", n3);
		}
		n1 = n2;
		n2 = n3;
	}
	return (0);
}

