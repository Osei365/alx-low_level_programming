#include <stdio.h>
#include <math.h>
/**
 * main - prints largest prime factor
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	long n = 612852475143;
	long a;
	long primest;

	if (n % 3 == 0)
	{
		primest = 3;
		n = n / 3;
	}
	for (a = 5; a <= sqrt(n); a += 6)
	{
		while (n % a == 0)
		{
			primest = a;
			n = n / a;
		}
		while (n % (a + 2) == 0)
		{
			primest = a + 2;
			n = n / (a + 2);
		}
	}
	if (n > 4)
	{
		primest = n;
	}
	printf("%ld\n", primest);
	return (0);
}
