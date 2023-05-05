#include "main.h"
/**
 * flip_bits - calcs number of bits to be flipped
 * to get from one number to the order
 * @n: first number
 * @m: second number
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0;
	unsigned long int disp;

	disp = n ^ m;
	while (disp)
	{
		if (disp & 1)
			a++;
		disp = disp >> 1;
	}
	return (a);
}
