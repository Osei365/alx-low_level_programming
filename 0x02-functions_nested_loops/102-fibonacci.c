#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n1 = 0;
	int n3;
	int n2 = 1;
	int i;

	for (i = 0; i < 50; i++)
	{
		n3 = n1 + n2;
		if (i != 49)
		{
			printf("%d, ", n3);
		}
		else
		{
			printf("%d\n", n3);
		}
		n1 = n2;
		n2 = n3;
	}
}

