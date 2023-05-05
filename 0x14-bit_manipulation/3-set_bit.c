#include "main.h"
/**
 * set_bit - set value of bit to 1
 * at a given index
 * @n: number to be changed
 * @index: index position
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int left;

	if (index > 64)
		return (-1);
	left = 1 << index;

	*n = *n + left;
	return (1);
}
