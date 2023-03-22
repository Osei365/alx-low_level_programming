#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	long n1 = 0;
	long n2 = 1;
	long n3, hf1, hf2, hf3, hf4, hf, hff;
	int i;

	for (i = 0; i < 90; i++)
	{
		n3 = n1 + n2;
		printf("%li, ", n3);
		n1 = n2;
		n2 = n3;
	}
	hf1 = n1 / 10000000000;
	hf2 = n1 % 10000000000;
	hf3 = n2 / 10000000000;
	hf4 = n2 % 10000000000;
	for (i = 90; i < 98; i++)
	{
		hf = hf2 + hf4;
		hff = hf1 + hf3;
		if (hf > 9999999999)
		{
			hf = hf % 10000000000;
			hff = hff + 1;
		}
		printf("%ld%ld", hff, hf);
		if (i != 97)
		printf(", ");
		hf1 = hf3;
		hf2 = hf4;
		hf3 = hff;
		hf4 = hf;
	}
	printf("\n");
	return (0);
}
