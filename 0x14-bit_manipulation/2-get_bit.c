#include "main.h"
/**
 * get_bit - gets bit at index
 * @n: decimal number to evealuate
 * @index: index of bit
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (index == 0 && n)
		return (n & 1);
	for (a = 0; a < index; a++)
	{
		n = n >> 1;
	}
	if (n)
		return (n & 1);
	return (-1);
}
