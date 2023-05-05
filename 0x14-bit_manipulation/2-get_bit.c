#include "main.h"
/**
 * get_bit - gets bit at index
 * @n: decimal number to evealuate
 * @index: index of bit
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shift;

	if (index > 64)
		return (-1);

	shift = n >> index;
	return (shift & 1);
}
